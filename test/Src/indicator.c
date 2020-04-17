#include "main.h"
#include "indicator.h"
#include "segments_indicator.h"

void blurs_on(void)
{
	DIG_2_ON
	SEG_D3_OFF
	DIG_3_ON
	SEG_D4_OFF
}

void blurs_off(void)
{
	DIG_2_OFF
	SEG_D3_OFF
	DIG_3_OFF
	SEG_D4_OFF
}

void digital_seg_1_on(void)
{
	DIG_1_ON DIG_2_OFF DIG_3_OFF DIG_4_OFF
}

void digital_seg_1_off(void)
{
	DIG_1_OFF
}

void digital_seg_2_on(void)
{
	DIG_1_OFF DIG_2_ON DIG_3_OFF DIG_4_OFF
}

void digital_seg_2_off(void)
{
	DIG_2_OFF
}


void digital_seg_3_on(void)
{
	DIG_1_OFF DIG_2_OFF DIG_3_ON DIG_4_OFF
}

void digital_seg_3_off(void)
{
	DIG_3_OFF
}

void digital_seg_4_on(void)
{
	DIG_1_OFF DIG_2_OFF DIG_3_OFF DIG_4_ON
}

void digital_seg_4_off(void)
{
	DIG_4_OFF
}

void digital_0_on(void)
{
	SEG_A_ON SEG_B_ON	SEG_C_ON SEG_D_ON	SEG_E_ON SEG_F_ON	SEG_G_OFF	SEG_D3_OFF SEG_D4_OFF
}

void digital_0_off(void)
{
	SEG_A_OFF SEG_B_OFF SEG_C_OFF SEG_D_OFF SEG_E_OFF SEG_F_OFF
}

void digital_1_on(void)
{
	SEG_A_OFF	SEG_B_ON SEG_C_ON SEG_D_OFF SEG_E_OFF SEG_F_OFF SEG_G_OFF SEG_D3_OFF SEG_D4_OFF
}

void digital_1_off(void)
{
	SEG_B_OFF SEG_C_OFF
}

void digital_2_on(void)
{
	SEG_A_ON SEG_B_ON SEG_C_OFF SEG_D_ON SEG_E_ON SEG_F_OFF SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_2_off(void)
{
	SEG_A_OFF SEG_B_OFF SEG_D_OFF SEG_E_OFF SEG_G_OFF
}

void digital_3_on(void)
{
	SEG_A_ON SEG_B_ON SEG_C_ON SEG_D_ON SEG_E_OFF SEG_F_OFF SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_3_off(void)
{
	SEG_A_OFF SEG_B_OFF SEG_C_OFF SEG_D_OFF SEG_G_OFF
}

void digital_4_on(void)
{
	SEG_A_OFF SEG_B_ON SEG_C_ON SEG_D_OFF SEG_E_OFF SEG_F_ON	SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_4_off(void)
{
	SEG_B_OFF SEG_C_OFF SEG_F_OFF	SEG_G_OFF
}

void digital_5_on(void)
{
	SEG_A_ON SEG_B_OFF SEG_C_ON SEG_D_ON SEG_E_OFF SEG_F_ON	SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_5_off(void)
{
	SEG_A_OFF SEG_C_OFF SEG_D_OFF SEG_F_OFF	SEG_G_OFF
}

void digital_6_on(void)
{
	SEG_A_ON SEG_B_OFF SEG_C_ON SEG_D_ON SEG_E_ON SEG_F_ON SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_6_off(void)
{
	SEG_A_OFF SEG_C_OFF SEG_D_OFF SEG_E_OFF SEG_F_OFF SEG_G_OFF
}

void digital_7_on(void)
{
	SEG_A_ON SEG_B_ON SEG_C_ON SEG_D_OFF SEG_E_OFF SEG_F_OFF SEG_G_OFF SEG_D3_OFF SEG_D4_OFF
}

void digital_7_off(void)
{
	SEG_A_OFF SEG_B_OFF SEG_C_OFF
}

void digital_8_on(void)
{
	SEG_A_ON SEG_B_ON SEG_C_ON SEG_D_ON SEG_E_ON SEG_F_ON SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_8_off(void)
{
	SEG_A_OFF SEG_B_OFF SEG_C_OFF SEG_D_OFF SEG_E_OFF SEG_F_OFF SEG_G_OFF
}

void digital_9_on(void)
{
	SEG_A_ON SEG_B_ON SEG_C_ON SEG_D_ON SEG_E_OFF SEG_F_ON SEG_G_ON SEG_D3_OFF SEG_D4_OFF
}

void digital_9_off(void)
{
	SEG_A_OFF SEG_B_OFF SEG_C_OFF SEG_D_OFF SEG_F_OFF SEG_G_OFF
}
