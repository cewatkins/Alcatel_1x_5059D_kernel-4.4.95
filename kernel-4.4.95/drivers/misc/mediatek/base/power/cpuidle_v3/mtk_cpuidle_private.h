
#ifndef _MTK_CPUIDLE_PRIVATE_H_
#define _MTK_CPUIDLE_PRIVATE_H_

#define MAX_SPM_WAKEUP_SRC 5

struct spm_wakeup_source {
	int irq_nr;
	int irq_pending;
};

unsigned long *aee_rr_rec_mtk_cpuidle_footprint_va(void);
unsigned long *aee_rr_rec_mtk_cpuidle_footprint_pa(void);
int request_uart_to_wakeup(void);

unsigned long * __weak mt_save_dbg_regs(unsigned long *p, unsigned int cpuid)
{
	return 0;
}

void __weak mt_restore_dbg_regs(unsigned long *p, unsigned int cpuid)
{
}

void __weak dpm_mcsi_mtcmos_on_flow(int on)
{
}

#define CPUIDLE_FP_ENTER_CPUIDLE		0
#define CPUIDLE_FP_BEFORE_ATF			1
#define CPUIDLE_FP_ENTER_ATF			2
#define CPUIDLE_FP_RESERVE_P1			3
#define CPUIDLE_FP_RESERVE_P2			4
#define CPUIDLE_FP_ENTER_SPM_SUSPEND		5
#define CPUIDLE_FP_LEAVE_SPM_SUSPEND		6
#define CPUIDLE_FP_BEFORE_WFI			7
#define CPUIDLE_FP_AFTER_WFI			8
#define CPUIDLE_FP_BEFORE_MMU			9
#define CPUIDLE_FP_AFTER_MMU			10
#define CPUIDLE_FP_ENTER_SPM_SUSPEND_FINISH	11
#define CPUIDLE_FP_LEAVE_SPM_SUSPEND_FINISH	12
#define CPUIDLE_FP_LEAVE_ATF			13
#define CPUIDLE_FP_AFTER_ATF			14
#define CPUIDLE_FP_LEAVE_CPUIDLE		15


#define CPUIDLE_TS_ENTER_CPUIDLE		0
#define CPUIDLE_TS_BEFORE_ATF			1
#define CPUIDLE_TS_ENTER_ATF			2
#define CPUIDLE_TS_BEFORE_L2_FLUSH		3
#define CPUIDLE_TS_AFTER_L2_FLUSH		4
#define CPUIDLE_TS_ENTER_SPM_SUSPEND		5
#define CPUIDLE_TS_LEAVE_SPM_SUSPEND		6
#define CPUIDLE_TS_GIC_P1			7
#define CPUIDLE_TS_GIC_P2			8
#define CPUIDLE_TS_BEFORE_WFI			9
#define CPUIDLE_TS_AFTER_WFI			10
#define CPUIDLE_TS_RESERVE_P1			11
#define CPUIDLE_TS_RESERVE_P2			12
#define CPUIDLE_TS_GIC_P3			13
#define CPUIDLE_TS_GIC_P4			14
#define CPUIDLE_TS_ENTER_SPM_SUSPEND_FINISH	15
#define CPUIDLE_TS_LEAVE_SPM_SUSPEND_FINISH	16
#define CPUIDLE_TS_LEAVE_ATF			17
#define CPUIDLE_TS_AFTER_ATF			18
#define CPUIDLE_TS_LEAVE_CPUIDLE		19
#define NR_CPUIDLE_TS				20

struct cpuidle_perf_time {
	unsigned count;
	unsigned kernel_plat_backup;
	unsigned kernel_to_atf;
	unsigned atf_setup;
	unsigned atf_l2_flush;
	unsigned atf_spm_suspend;
	unsigned atf_gic_backup;
	unsigned atf_plat_backup;

	unsigned atf_cpu_init;
	unsigned atf_gic_restore;
	unsigned atf_spm_suspend_finish;
	unsigned atf_plat_restore;
	unsigned atf_to_kernel;
	unsigned kernel_plat_restore;

	unsigned k2atf;
	unsigned atf2wfi;
	unsigned wfi2k;
	unsigned k2leave;
};

#endif
