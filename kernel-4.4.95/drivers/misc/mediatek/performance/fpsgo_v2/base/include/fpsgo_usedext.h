
#ifndef __FPSGO_USEDEXT_H__
#define __FPSGO_USEDEXT_H__

extern void (*cpufreq_notifier_fp)(int, unsigned long);
/*extern void (*ged_kpi_output_gfx_info_fp)(long long t_gpu, unsigned int cur_freq, unsigned int cur_max_freq);*/
/*extern void (*display_time_fps_stablizer)(unsigned long long ts);*/
extern void (*fpsgo_notify_qudeq_fp)(int qudeq, unsigned int startend, unsigned long long bufID, int pid, int queue_SF);
extern void (*fpsgo_notify_intended_vsync_fp)(int pid, unsigned long long frame_id);
extern void (*fpsgo_notify_framecomplete_fp)
	(int ui_pid, unsigned long long frame_time, int render_method, int render, unsigned long long frame_id);
extern void (*fpsgo_notify_connect_fp)(int pid, unsigned long long bufID, int connectedAPI);
extern void (*fpsgo_notify_draw_start_fp)(int pid, unsigned long long frame_id);

extern void (*ged_vsync_notifier_fp)(void);

extern int (*fpsgo_fbt2fstb_cpu_capability_fp)(
	int pid, int frame_type,
	unsigned int curr_cap,
	unsigned int max_cap,
	unsigned int target_fps,
	unsigned long long Q2Q_time,
	unsigned long long Running_time);

int fpsgo_is_force_enable(void);
void fpsgo_force_switch_enable(int enable);

#endif
