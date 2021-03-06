

#ifndef __LINUX_REGULATOR_MTK_REGULATOR_CORE_H_
#define __LINUX_REGULATOR_MTK_REGULATOR_CORE_H_
#include <linux/regulator/driver.h>
#include <linux/regulator/mediatek/mtk_regulator.h>
#include <linux/mutex.h>

#define MTK_SIMPLE_REGULATOR_VERSION "0.0.4_MTK"

typedef uint8_t mreg_reg_t;
typedef struct mutex mreg_mutex_t;

struct mtk_simple_regulator_desc;

struct mtk_simple_regulator_control_ops {
	/* Necessary */
	int (*register_read)(void *client, uint32_t reg, uint32_t *data);
	int (*register_write)(void *client, uint32_t reg, uint32_t data);
	int (*register_update_bits)(void *client, uint32_t reg, uint32_t mask,
		uint32_t data);
};


struct mtk_simple_regulator_ext_ops {
	int (*set_voltage_sel)(struct mtk_simple_regulator_desc *,
		unsigned selector);
	int (*get_voltage_sel)(struct mtk_simple_regulator_desc *);

	/* enable/disable regulator */
	int (*enable)(struct mtk_simple_regulator_desc *);
	int (*disable)(struct mtk_simple_regulator_desc *);
	int (*is_enabled)(struct mtk_simple_regulator_desc *);
	int (*set_mode)(struct mtk_simple_regulator_desc *, unsigned int mode);
	unsigned int (*get_mode)(struct mtk_simple_regulator_desc *);
	int (*get_status)(struct mtk_simple_regulator_desc *);

	/* set regulator suspend voltage */
	int (*set_suspend_voltage)(struct mtk_simple_regulator_desc *, int uV);

	/* enable/disable regulator in suspend state */
	int (*set_suspend_enable)(struct mtk_simple_regulator_desc *);
	int (*set_suspend_disable)(struct mtk_simple_regulator_desc *);
};

struct mtk_simple_regulator_adv_ops {
	int (*set_property)(struct mtk_simple_regulator_desc *mreg_desc,
		enum mtk_simple_regulator_property prop,
		union mtk_simple_regulator_propval *val);
	int (*get_property)(struct mtk_simple_regulator_desc *mreg_desc,
		enum mtk_simple_regulator_property prop,
		union mtk_simple_regulator_propval *val);
};

struct mtk_simple_regulator_desc {
	struct regulator_desc rdesc;
	struct regulator_ops rops;
	struct regulator_dev *rdev;
	struct regulator_init_data *def_init_data;

	struct mtk_simple_regulator_control_ops *mreg_ctrl_ops;
	const struct mtk_simple_regulator_ext_ops *mreg_ext_ops;
	const struct mtk_simple_regulator_adv_ops *mreg_adv_ops;
	struct mtk_simple_regulator_device *mreg_dev;

	void *client;
	void *prv_data;
	uint32_t min_uV;
	uint32_t max_uV;
	const uint32_t  *output_list;
	int (*list_voltage)(struct mtk_simple_regulator_desc *,
		unsigned selector);
	mreg_reg_t vol_reg;
	mreg_reg_t vol_mask;
	mreg_reg_t enable_reg;
	mreg_reg_t enable_bit;
	mreg_reg_t vol_shift;
};

extern int mtk_simple_regulator_register(struct mtk_simple_regulator_desc *,
	struct device *, const struct mtk_simple_regulator_ext_ops *,
	struct mtk_simple_regulator_adv_ops *);
extern int mtk_simple_regulator_unregister(struct mtk_simple_regulator_desc *);

static inline void mtk_simple_regulator_mutex_init(mreg_mutex_t *lock)
{
	mutex_init(lock);
}

static inline void mtk_simple_regulator_mutex_lock(mreg_mutex_t *lock)
{
	mutex_lock(lock);
}

static inline void mtk_simple_regulator_mutex_unlock(mreg_mutex_t *lock)
{
	mutex_unlock(lock);
}

static inline void mtk_simple_regulator_mutex_destroy(mreg_mutex_t *lock)
{
	mutex_destroy(lock);
}

#define mreg_decl_vol(_name, _output_list, ctrl_ops) \
{ \
	.rdesc = { \
		.name = #_name, \
		.id = _name##_id, \
		.type = REGULATOR_VOLTAGE, \
		.n_voltages = ARRAY_SIZE(_output_list), \
		.owner = THIS_MODULE, \
	}, \
	.min_uV = _name##_min_uV, \
	.max_uV = _name##_max_uV, \
	.vol_reg = _name##_vol_reg, \
	.vol_mask = _name##_vol_mask, \
	.enable_reg = _name##_enable_reg, \
	.enable_bit = _name##_enable_bit, \
	.vol_shift = _name##_vol_shift, \
	.output_list = _output_list, \
	.mreg_ctrl_ops = ctrl_ops, \
}

#define mreg_decl(_name, _list_voltage, _n_voltages, ctrl_ops) \
{ \
	.rdesc = { \
		.name = #_name, \
		.id = _name##_id, \
		.type = REGULATOR_VOLTAGE, \
		.n_voltages = _n_voltages, \
		.owner = THIS_MODULE, \
	}, \
	.min_uV = _name##_min_uV, \
	.max_uV = _name##_max_uV, \
	.vol_reg = _name##_vol_reg, \
	.vol_mask = _name##_vol_mask, \
	.enable_reg = _name##_enable_reg, \
	.enable_bit = _name##_enable_bit, \
	.vol_shift = _name##_vol_shift, \
	.list_voltage = _list_voltage, \
	.mreg_ctrl_ops = ctrl_ops, \
}

#endif /* __LINUX_REGULATOR_MTK_REGULATOR_CORE_H_ */



