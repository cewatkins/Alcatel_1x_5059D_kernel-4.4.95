
#ifndef _EMI_MODULE_H_
#define _EMI_MODULE_H_

struct mst_tbl_entry {
	u32 master;
	u32 port;
	u32 id_mask;
	u32 id_val;
	const char *note;
	const char *name;
};

enum {
	MT6758_M4_AXI_MST_MSDC0,
	MT6758_M4_AXI_MST_SOE,
	MT6758_M4_AXI_MST_DXCC_64P,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH3_R,
	MT6758_M5_AXI_MST_LARB7,
	MT6758_M2_AXI_MST_LARB1,
	MT6758_M4_AXI_MST_HRQ_RD,
	MT6758_M4_AXI_MST_CQDMA,
	MT6758_M3_AXI_MST_MD,
	MT6758_M4_AXI_MST_ASM4,
	MT6758_M4_AXI_MST_DBG0,
	MT6758_M5_AXI_MST_IPU,
	MT6758_M4_AXI_MST_VTB,
	MT6758_M4_AXI_MST_DSPLOG_ICC,
	MT6758_M4_AXI_MST_HRQ_WR1,
	MT6758_M4_AXI_MST_UFSHCI,
	MT6758_M0_AXI_MST_MP0,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH7_W,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH2_R,
	MT6758_M4_AXI_MST_RXDMP_MMU,
	MT6758_M4_AXI_MST_GDMALOG,
	MT6758_M2_AXI_MST_LARB5,
	MT6758_M4_AXI_MST_CONNSYS,
	MT6758_M4_AXI_MST_CLDMA_AP,
	MT6758_M4_AXI_MST_SCP,
	MT6758_M2_AXI_MST_LARB7,
	MT6758_M4_AXI_MST_SPI1,
	MT6758_M2_AXI_MST_MM_IOMMU,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH6_W,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH1_R,
	MT6758_M4_AXI_MST_MDDBGSYS,
	MT6758_M1_AXI_MST_MP0,
	MT6758_M4_AXI_MST_L1SYS2MDA,
	MT6758_M4_AXI_MST_SPI3,
	MT6758_M4_AXI_MST_DSPLOG_IMC,
	MT6758_M6_AXI_MST_MFG_M0,
	MT6758_M4_AXI_MST_TBO,
	MT6758_M4_AXI_MST_RXTDB_IMC,
	MT6758_M4_AXI_MST_SPI5,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH5_W,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH0_R,
	MT6758_M5_AXI_MST_LARB0,
	MT6758_M4_AXI_MST_THERMAL,
	MT6758_M4_AXI_MST_SPI7,
	MT6758_M4_AXI_MST_APDMA,
	MT6758_M4_AXI_MST_DSPLOG_MPC,
	MT6758_M4_AXI_MST_PWM,
	MT6758_M5_AXI_MST_LARB4,
	MT6758_M4_AXI_MST_CSTXB_CSH,
	MT6758_M4_AXI_MST_SPM,
	MT6758_M4_AXI_MST_ASM1,
	MT6758_M4_AXI_MST_CLDMA_MD,
	MT6758_M4_AXI_MST_MDINFRA_ASM,
	MT6758_M4_AXI_MST_DSPCNWDMA_ICC,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH7_R,
	MT6758_M5_AXI_MST_LARB6,
	MT6758_M2_AXI_MST_LARB0,
	MT6758_M4_AXI_MST_CSTXB_TXBRP,
	MT6758_M4_AXI_MST_GDMA,
	MT6758_M7_AXI_MST_MFG_M1,
	MT6758_M4_AXI_MST_ASM3,
	MT6758_M4_AXI_MST_HRQ_WR,
	MT6758_M4_AXI_MST_PDTRACE,
	MT6758_M4_AXI_MST_DBGTOP,
	MT6758_M4_AXI_MST_ULS,
	MT6758_M4_AXI_MST_MSDC1,
	MT6758_M4_AXI_MST_TXCAL,
	MT6758_M3_AXI_MST_C2K,
	MT6758_M4_AXI_MST_SSUSB,
	MT6758_M2_AXI_MST_IPU,
	MT6758_M4_AXI_MST_PWR_MD32,
	MT6758_M4_AXI_MST_HW_TRC,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH4_W,
	MT6758_M4_AXI_MST_DEBUG,
	MT6758_M4_AXI_MST_AUDIO,
	MT6758_M4_AXI_MST_MSDC3,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH6_R,
	MT6758_M4_AXI_MST_DBG1,
	MT6758_M4_AXI_MST_DXCC_64S,
	MT6758_M2_AXI_MST_LARB4,
	MT6758_M4_AXI_MST_TRACE_TOP,
	MT6758_M0_AXI_MST_MP1,
	MT6758_M5_AXI_MST_MM_IOMMU,
	MT6758_M4_AXI_MST_DSPBTDMA_ICC,
	MT6758_M4_AXI_MST_HRQ_RD1,
	MT6758_M4_AXI_MST_SW_TRC,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH3_W,
	MT6758_M2_AXI_MST_LARB6,
	MT6758_M4_AXI_MST_HSPAL2,
	MT6758_M4_AXI_MST_SHM,
	MT6758_M4_AXI_MST_SPI0,
	MT6758_M4_AXI_MST_DSPCNWDMA_IMC,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH5_R,
	MT6758_M4_AXI_MST_PS_PERI,
	MT6758_M4_AXI_MST_DSPBTDMA_IMC,
	MT6758_M4_AXI_MST_SPI2,
	MT6758_M4_AXI_MST_LTEL1_CS,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH2_W,
	MT6758_M1_AXI_MST_MP1,
	MT6758_M4_AXI_MST_SPI4,
	MT6758_M4_AXI_MST_DSPCNWDMA_MPC,
	MT6758_M4_AXI_MST_CMTDB_MPC,
	MT6758_M6_AXI_MST_MFG_M1,
	MT6758_M4_AXI_MST_GCE,
	MT6758_M4_AXI_MST_SPI6,
	MT6758_M5_AXI_MST_LARB1,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH1_W,
	MT6758_M4_AXI_MST_CSTXB_DCXO,
	MT6758_M4_AXI_MST_LTEL2DMA,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH4_R,
	MT6758_M4_AXI_MST_ASM0,
	MT6758_M4_AXI_MST_IRDMA,
	MT6758_M4_AXI_MST_MDL1_GDMA_CH0_W,
	MT6758_M5_AXI_MST_LARB5,
	MT6758_M4_AXI_MST_DSPBTDMA_MPC,
	MT6758_M7_AXI_MST_MFG_M0,
	MT6758_M4_AXI_MST_ASM2,
	MST_INVALID,
	NR_MST
};

static const struct mst_tbl_entry mst_tbl[] = {
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x4,
		.note = "Core nn system domain store exclusive",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x24,
		.note = "Core nn barrier",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "SCU generated barrier",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FF7,
		.id_val = 0x54,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x64,
		.note = "Core nn non-re-orderable device write",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F87,
		.id_val = 0x84,
		.note = "Write to normal memory",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x4,
		.note = "Core nn exclusive read or non-reorderable device read",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x24,
		.note = "Core nn barrier",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "SCU generated barrier or DVM complete",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FF7,
		.id_val = 0x54,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x64,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F9F,
		.id_val = 0x84,
		.note = "ACP read",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F9F,
		.id_val = 0x8C,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F97,
		.id_val = 0x94,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F07,
		.id_val = 0x104,
		.note = "Core nn read",
		.name = "MT6758_M0_AXI_MST_MP0"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x3,
		.note = "Core nn system domain store exclusive",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x23,
		.note = "Core nn barrier",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x43,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x4B,
		.note = "SCU generated barrier",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FF7,
		.id_val = 0x53,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x63,
		.note = "Core nn non-re-orderable device write",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1F87,
		.id_val = 0x83,
		.note = "Write to normal memory",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x3,
		.note = "Core nn exclusive read or non-reorderable device read",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x23,
		.note = "Core nn barrier",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x43,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x4B,
		.note = "SCU generated barrier or DVM complete",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FF7,
		.id_val = 0x53,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x63,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1F9F,
		.id_val = 0x83,
		.note = "ACP read",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1F9F,
		.id_val = 0x8B,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1F97,
		.id_val = 0x93,
		.note = "Unused",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M0_AXI_MST_MP1, .port = 0, .id_mask = 0x1F07,
		.id_val = 0x103,
		.note = "Core nn read",
		.name = "MT6758_M0_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x4,
		.note = "Core nn system domain store exclusive",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x24,
		.note = "Core nn barrier",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "SCU generated barrier",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FF7,
		.id_val = 0x54,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x64,
		.note = "Core nn non-re-orderable device write",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1F87,
		.id_val = 0x84,
		.note = "Write to normal memory",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x4,
		.note = "Core nn exclusive read or non-reorderable device read",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x24,
		.note = "Core nn barrier",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "SCU generated barrier or DVM complete",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FF7,
		.id_val = 0x54,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x64,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1F9F,
		.id_val = 0x84,
		.note = "ACP read",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1F9F,
		.id_val = 0x8C,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1F97,
		.id_val = 0x94,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP0, .port = 1, .id_mask = 0x1F07,
		.id_val = 0x104,
		.note = "Core nn read",
		.name = "MT6758_M1_AXI_MST_MP0"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x3,
		.note = "Core nn system domain store exclusive",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x23,
		.note = "Core nn barrier",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x43,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x4B,
		.note = "SCU generated barrier",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FF7,
		.id_val = 0x53,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x63,
		.note = "Core nn non-re-orderable device write",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F87,
		.id_val = 0x83,
		.note = "Write to normal memory",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x3,
		.note = "Core nn exclusive read or non-reorderable device read",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x23,
		.note = "Core nn barrier",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x43,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x4B,
		.note = "SCU generated barrier or DVM complete",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FF7,
		.id_val = 0x53,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x63,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F9F,
		.id_val = 0x83,
		.note = "ACP read",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F9F,
		.id_val = 0x8B,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F97,
		.id_val = 0x93,
		.note = "Unused",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F07,
		.id_val = 0x103,
		.note = "Core nn read",
		.name = "MT6758_M1_AXI_MST_MP1"},
	{.master = MT6758_M6_AXI_MST_MFG_M0, .port = 6, .id_mask = 0x1F80,
		.id_val = 0x0,
		.note = "",
		.name = "MT6758_M6_AXI_MST_MFG_M0"},
	{.master = MT6758_M6_AXI_MST_MFG_M1, .port = 6, .id_mask = 0x1F80,
		.id_val = 0x0,
		.note = "",
		.name = "MT6758_M6_AXI_MST_MFG_M1"},
	{.master = MT6758_M7_AXI_MST_MFG_M0, .port = 7, .id_mask = 0x1F80,
		.id_val = 0x0,
		.note = "",
		.name = "MT6758_M7_AXI_MST_MFG_M0"},
	{.master = MT6758_M7_AXI_MST_MFG_M1, .port = 7, .id_mask = 0x1F80,
		.id_val = 0x0,
		.note = "",
		.name = "MT6758_M7_AXI_MST_MFG_M1"},
	{.master = MT6758_M2_AXI_MST_LARB0, .port = 2, .id_mask = 0x1D80,
		.id_val = 0x0,
		.note = "MM",
		.name = "MT6758_M2_AXI_MST_LARB0"},
	{.master = MT6758_M2_AXI_MST_LARB1, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x80,
		.note = "MM",
		.name = "MT6758_M2_AXI_MST_LARB1"},
	{.master = MT6758_M2_AXI_MST_LARB4, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x100,
		.note = "VDEC",
		.name = "MT6758_M2_AXI_MST_LARB4"},
	{.master = MT6758_M2_AXI_MST_LARB5, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x180,
		.note = "IMG",
		.name = "MT6758_M2_AXI_MST_LARB5"},
	{.master = MT6758_M2_AXI_MST_LARB6, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x200,
		.note = "CAM",
		.name = "MT6758_M2_AXI_MST_LARB6"},
	{.master = MT6758_M2_AXI_MST_LARB7, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x280,
		.note = "VENC",
		.name = "MT6758_M2_AXI_MST_LARB7"},
	{.master = MT6758_M2_AXI_MST_IPU, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x300,
		.note = "IPU",
		.name = "MT6758_M2_AXI_MST_IPU"},
	{.master = MT6758_M2_AXI_MST_MM_IOMMU, .port = 2, .id_mask = 0x1FFF,
		.id_val = 0x3FC,
		.note = "M4U",
		.name = "MT6758_M2_AXI_MST_MM_IOMMU"},
	{.master = MT6758_M2_AXI_MST_MM_IOMMU, .port = 2, .id_mask = 0x1FFF,
		.id_val = 0x3FD,
		.note = "M4U",
		.name = "MT6758_M2_AXI_MST_MM_IOMMU"},
	{.master = MT6758_M5_AXI_MST_LARB0, .port = 5, .id_mask = 0x1D80,
		.id_val = 0x0,
		.note = "MM",
		.name = "MT6758_M5_AXI_MST_LARB0"},
	{.master = MT6758_M5_AXI_MST_LARB1, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x80,
		.note = "MM",
		.name = "MT6758_M5_AXI_MST_LARB1"},
	{.master = MT6758_M5_AXI_MST_LARB4, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x100,
		.note = "VDEC",
		.name = "MT6758_M5_AXI_MST_LARB4"},
	{.master = MT6758_M5_AXI_MST_LARB5, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x180,
		.note = "IMG",
		.name = "MT6758_M5_AXI_MST_LARB5"},
	{.master = MT6758_M5_AXI_MST_LARB6, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x200,
		.note = "CAM",
		.name = "MT6758_M5_AXI_MST_LARB6"},
	{.master = MT6758_M5_AXI_MST_LARB7, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x280,
		.note = "VENC",
		.name = "MT6758_M5_AXI_MST_LARB7"},
	{.master = MT6758_M5_AXI_MST_IPU, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x300,
		.note = "IPU",
		.name = "MT6758_M5_AXI_MST_IPU"},
	{.master = MT6758_M5_AXI_MST_MM_IOMMU, .port = 5, .id_mask = 0x1FFF,
		.id_val = 0x3FC,
		.note = "M4U",
		.name = "MT6758_M5_AXI_MST_MM_IOMMU"},
	{.master = MT6758_M5_AXI_MST_MM_IOMMU, .port = 5, .id_mask = 0x1FFF,
		.id_val = 0x3FD,
		.note = "M4U",
		.name = "MT6758_M5_AXI_MST_MM_IOMMU"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FC3,
		.id_val = 0x0,
		.note = "MDMCU cache read",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x1C,
		.note = "MDMCU cache write",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x40,
		.note = "MDMCU noncache Core0VPE0",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "MDMCU noncache Core1VPE0",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x48,
		.note = "MDMCU noncache Core2VPE0",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "MDMCU noncache Core3VPE0",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x50,
		.note = "MDMCU noncache IOCU",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x60,
		.note = "MDMCU noncache Core0VPE1",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x64,
		.note = "MDMCU noncache Core1VPE1",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x68,
		.note = "MDMCU noncache Core2VPE1",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_MD, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x6C,
		.note = "MDMCU noncache Core3VPE1",
		.name = "MT6758_M3_AXI_MST_MD"},
	{.master = MT6758_M3_AXI_MST_C2K, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x11,
		.note = "ARM I ",
		.name = "MT6758_M3_AXI_MST_C2K"},
	{.master = MT6758_M3_AXI_MST_C2K, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x5,
		.note = "ARM D",
		.name = "MT6758_M3_AXI_MST_C2K"},
	{.master = MT6758_M3_AXI_MST_C2K, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x25,
		.note = "DMA",
		.name = "MT6758_M3_AXI_MST_C2K"},
	{.master = MT6758_M3_AXI_MST_C2K, .port = 3, .id_mask = 0x1FFF,
		.id_val = 0x19,
		.note = "Prefetch Buffer",
		.name = "MT6758_M3_AXI_MST_C2K"},
	{.master = MT6758_M4_AXI_MST_AUDIO, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1A,
		.note = "",
		.name = "MT6758_M4_AXI_MST_AUDIO"},
	{.master = MT6758_M4_AXI_MST_CLDMA_AP, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x6,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CLDMA_AP"},
	{.master = MT6758_M4_AXI_MST_CLDMA_MD, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x16,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CLDMA_MD"},
	{.master = MT6758_M4_AXI_MST_PWM, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xF0,
		.note = "",
		.name = "MT6758_M4_AXI_MST_PWM"},
	{.master = MT6758_M4_AXI_MST_PWR_MD32, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x3A,
		.note = "",
		.name = "MT6758_M4_AXI_MST_PWR_MD32"},
	{.master = MT6758_M4_AXI_MST_SCP, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x4A,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SCP"},
	{.master = MT6758_M4_AXI_MST_SPI0, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x10,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI0"},
	{.master = MT6758_M4_AXI_MST_SPI1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x30,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI1"},
	{.master = MT6758_M4_AXI_MST_SPI2, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x50,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI2"},
	{.master = MT6758_M4_AXI_MST_SPI3, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x70,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI3"},
	{.master = MT6758_M4_AXI_MST_SPI4, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x90,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI4"},
	{.master = MT6758_M4_AXI_MST_SPI5, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x41,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI5"},
	{.master = MT6758_M4_AXI_MST_SPI6, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x51,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI6"},
	{.master = MT6758_M4_AXI_MST_SPI7, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x61,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPI7"},
	{.master = MT6758_M4_AXI_MST_UFSHCI, .port = 4, .id_mask = 0x1FCF,
		.id_val = 0x8,
		.note = "",
		.name = "MT6758_M4_AXI_MST_UFSHCI"},
	{.master = MT6758_M4_AXI_MST_SSUSB, .port = 4, .id_mask = 0x1FCF,
		.id_val = 0x5,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SSUSB"},
	{.master = MT6758_M4_AXI_MST_MSDC0, .port = 4, .id_mask = 0x1FCF,
		.id_val = 0x4,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MSDC0"},
	{.master = MT6758_M4_AXI_MST_MSDC1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xD0,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MSDC1"},
	{.master = MT6758_M4_AXI_MST_MSDC3, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x31,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MSDC3"},
	{.master = MT6758_M4_AXI_MST_DXCC_64P, .port = 4, .id_mask = 0x1E1F,
		.id_val = 0x9,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DXCC_64P"},
	{.master = MT6758_M4_AXI_MST_DXCC_64S, .port = 4, .id_mask = 0x1E1F,
		.id_val = 0x19,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DXCC_64S"},
	{.master = MT6758_M4_AXI_MST_DBGTOP, .port = 4, .id_mask = 0x1E1F,
		.id_val = 0x0,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DBGTOP"},
	{.master = MT6758_M4_AXI_MST_CQDMA, .port = 4, .id_mask = 0x1F1F,
		.id_val = 0x1D,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CQDMA"},
	{.master = MT6758_M4_AXI_MST_GCE, .port = 4, .id_mask = 0x1FCF,
		.id_val = 0x2,
		.note = "",
		.name = "MT6758_M4_AXI_MST_GCE"},
	{.master = MT6758_M4_AXI_MST_THERMAL, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x5A,
		.note = "",
		.name = "MT6758_M4_AXI_MST_THERMAL"},
	{.master = MT6758_M4_AXI_MST_SPM, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x2A,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SPM"},
	{.master = MT6758_M4_AXI_MST_CONNSYS, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xE,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CONNSYS"},
	{.master = MT6758_M4_AXI_MST_APDMA, .port = 4, .id_mask = 0x1F1F,
		.id_val = 0xD,
		.note = "",
		.name = "MT6758_M4_AXI_MST_APDMA"},
	{.master = MT6758_M4_AXI_MST_MDDBGSYS, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1006,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDDBGSYS"},
	{.master = MT6758_M4_AXI_MST_SOE, .port = 4, .id_mask = 0x1FFB,
		.id_val = 0x1001,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SOE"},
	{.master = MT6758_M4_AXI_MST_GDMALOG, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1000,
		.note = "",
		.name = "MT6758_M4_AXI_MST_GDMALOG"},
	{.master = MT6758_M4_AXI_MST_GDMA, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1200,
		.note = "",
		.name = "MT6758_M4_AXI_MST_GDMA"},
	{.master = MT6758_M4_AXI_MST_HSPAL2, .port = 4, .id_mask = 0x1FFE,
		.id_val = 0x1400,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HSPAL2"},
	{.master = MT6758_M4_AXI_MST_L1SYS2MDA, .port = 4, .id_mask = 0x1E00,
		.id_val = 0x1600,
		.note = "",
		.name = "MT6758_M4_AXI_MST_L1SYS2MDA"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH0_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1602,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH0_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH0_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1600,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH0_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH1_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1606,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH1_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH1_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1602,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH1_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH2_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x160A,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH2_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH2_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1604,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH2_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH3_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x160E,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH3_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH3_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1606,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH3_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH4_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1603,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH4_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH4_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1607,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH4_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH5_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1603,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH5_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH5_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1603,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH5_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH6_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x160B,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH6_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH6_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1605,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH6_W"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH7_R, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x160F,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH7_R"},
	{.master = MT6758_M4_AXI_MST_MDL1_GDMA_CH7_W, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1607,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDL1_GDMA_CH7_W"},
	{.master = MT6758_M4_AXI_MST_DSPCNWDMA_ICC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1762,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPCNWDMA_ICC"},
	{.master = MT6758_M4_AXI_MST_DSPBTDMA_ICC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1761,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPBTDMA_ICC"},
	{.master = MT6758_M4_AXI_MST_DSPLOG_ICC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1760,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPLOG_ICC"},
	{.master = MT6758_M4_AXI_MST_DSPCNWDMA_MPC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1705,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPCNWDMA_MPC"},
	{.master = MT6758_M4_AXI_MST_DSPBTDMA_MPC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1703,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPBTDMA_MPC"},
	{.master = MT6758_M4_AXI_MST_DSPLOG_MPC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1701,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPLOG_MPC"},
	{.master = MT6758_M4_AXI_MST_CMTDB_MPC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1700,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CMTDB_MPC"},
	{.master = MT6758_M4_AXI_MST_DSPCNWDMA_IMC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1745,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPCNWDMA_IMC"},
	{.master = MT6758_M4_AXI_MST_DSPBTDMA_IMC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1743,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPBTDMA_IMC"},
	{.master = MT6758_M4_AXI_MST_DSPLOG_IMC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1741,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DSPLOG_IMC"},
	{.master = MT6758_M4_AXI_MST_RXTDB_IMC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1740,
		.note = "",
		.name = "MT6758_M4_AXI_MST_RXTDB_IMC"},
	{.master = MT6758_M4_AXI_MST_RXDMP_MMU, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1780,
		.note = "",
		.name = "MT6758_M4_AXI_MST_RXDMP_MMU"},
	{.master = MT6758_M4_AXI_MST_LTEL1_CS, .port = 4, .id_mask = 0x1FF8,
		.id_val = 0x1680,
		.note = "",
		.name = "MT6758_M4_AXI_MST_LTEL1_CS"},
	{.master = MT6758_M4_AXI_MST_ASM0, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x1801,
		.note = "",
		.name = "MT6758_M4_AXI_MST_ASM0"},
	{.master = MT6758_M4_AXI_MST_ASM1, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x1805,
		.note = "",
		.name = "MT6758_M4_AXI_MST_ASM1"},
	{.master = MT6758_M4_AXI_MST_ASM2, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x1809,
		.note = "",
		.name = "MT6758_M4_AXI_MST_ASM2"},
	{.master = MT6758_M4_AXI_MST_ASM3, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x180D,
		.note = "",
		.name = "MT6758_M4_AXI_MST_ASM3"},
	{.master = MT6758_M4_AXI_MST_ASM4, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x1803,
		.note = "",
		.name = "MT6758_M4_AXI_MST_ASM4"},
	{.master = MT6758_M4_AXI_MST_PDTRACE, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x1807,
		.note = "",
		.name = "MT6758_M4_AXI_MST_PDTRACE"},
	{.master = MT6758_M4_AXI_MST_ULS, .port = 4, .id_mask = 0x1FEF,
		.id_val = 0x180B,
		.note = "",
		.name = "MT6758_M4_AXI_MST_ULS"},
	{.master = MT6758_M4_AXI_MST_MDINFRA_ASM, .port = 4, .id_mask = 0x1FFD,
		.id_val = 0x1800,
		.note = "",
		.name = "MT6758_M4_AXI_MST_MDINFRA_ASM"},
	{.master = MT6758_M4_AXI_MST_PS_PERI, .port = 4, .id_mask = 0x1FFE,
		.id_val = 0x1A00,
		.note = "",
		.name = "MT6758_M4_AXI_MST_PS_PERI"},
	{.master = MT6758_M4_AXI_MST_LTEL2DMA, .port = 4, .id_mask = 0x1FFE,
		.id_val = 0x1C00,
		.note = "",
		.name = "MT6758_M4_AXI_MST_LTEL2DMA"},
	{.master = MT6758_M4_AXI_MST_TRACE_TOP, .port = 4, .id_mask = 0x1FFE,
		.id_val = 0x1E00,
		.note = "",
		.name = "MT6758_M4_AXI_MST_TRACE_TOP"},
	{.master = MT6758_M4_AXI_MST_HRQ_RD, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x882,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HRQ_RD"},
	{.master = MT6758_M4_AXI_MST_HRQ_RD1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x886,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HRQ_RD1"},
	{.master = MT6758_M4_AXI_MST_HRQ_WR, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x881,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HRQ_WR"},
	{.master = MT6758_M4_AXI_MST_HRQ_WR1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x885,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HRQ_WR1"},
	{.master = MT6758_M4_AXI_MST_SW_TRC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x880,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SW_TRC"},
	{.master = MT6758_M4_AXI_MST_HW_TRC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x884,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HW_TRC"},
	{.master = MT6758_M4_AXI_MST_VTB, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x888,
		.note = "",
		.name = "MT6758_M4_AXI_MST_VTB"},
	{.master = MT6758_M4_AXI_MST_TBO, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x88C,
		.note = "",
		.name = "MT6758_M4_AXI_MST_TBO"},
	{.master = MT6758_M4_AXI_MST_DEBUG, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x890,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DEBUG"},
	{.master = MT6758_M4_AXI_MST_SW_TRC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x8C4,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SW_TRC"},
	{.master = MT6758_M4_AXI_MST_HW_TRC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x8C6,
		.note = "",
		.name = "MT6758_M4_AXI_MST_HW_TRC"},
	{.master = MT6758_M4_AXI_MST_IRDMA, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x8C1,
		.note = "",
		.name = "MT6758_M4_AXI_MST_IRDMA"},
	{.master = MT6758_M4_AXI_MST_TXCAL, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x801,
		.note = "",
		.name = "MT6758_M4_AXI_MST_TXCAL"},
	{.master = MT6758_M4_AXI_MST_SW_TRC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x809,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SW_TRC"},
	{.master = MT6758_M4_AXI_MST_DBG0, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x803,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DBG0"},
	{.master = MT6758_M4_AXI_MST_DBG1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x805,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DBG1"},
	{.master = MT6758_M4_AXI_MST_SHM, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x807,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SHM"},
	{.master = MT6758_M4_AXI_MST_TXCAL, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x840,
		.note = "",
		.name = "MT6758_M4_AXI_MST_TXCAL"},
	{.master = MT6758_M4_AXI_MST_SW_TRC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x844,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SW_TRC"},
	{.master = MT6758_M4_AXI_MST_DBG0, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x841,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DBG0"},
	{.master = MT6758_M4_AXI_MST_DBG1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x842,
		.note = "",
		.name = "MT6758_M4_AXI_MST_DBG1"},
	{.master = MT6758_M4_AXI_MST_SHM, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x843,
		.note = "",
		.name = "MT6758_M4_AXI_MST_SHM"},
	{.master = MT6758_M4_AXI_MST_CSTXB_DCXO, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x800,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CSTXB_DCXO"},
	{.master = MT6758_M4_AXI_MST_CSTXB_CSH, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x802,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CSTXB_CSH"},
	{.master = MT6758_M4_AXI_MST_CSTXB_TXBRP, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x804,
		.note = "",
		.name = "MT6758_M4_AXI_MST_CSTXB_TXBRP"},
};

#endif /* end of _EMI_MODULE_H_ */