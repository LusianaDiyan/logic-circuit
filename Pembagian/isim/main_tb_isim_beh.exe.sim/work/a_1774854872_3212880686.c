/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Pembagian/main.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1774854872_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5760U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 5776U);
    t6 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (8U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 3976);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 3880);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t9, 0);
    goto LAB6;

}

static void work_a_1774854872_3212880686_p_1(char *t0)
{
    char t3[16];
    char t11[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t12;
    unsigned int t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 5840U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 2088U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (1U + 4U);
    memcpy(t6, t1, t8);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (7 - 3);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t1, 4U);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (7 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t11 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 4;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t12 = (4 - 7);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t13;
    t4 = xsi_base_array_concat(t4, t3, t5, (char)99, (unsigned char)2, (char)97, t1, t11, (char)101);
    t7 = (t0 + 2208U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    t13 = (1U + 4U);
    memcpy(t7, t4, t13);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5930);
    *((int *)t1) = 0;
    t2 = (t0 + 5934);
    *((int *)t2) = 3;
    t12 = 0;
    t15 = 3;

LAB2:    if (t12 <= t15)
        goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);
    t1 = (t0 + 4040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t8 = (4 - 3);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = (t0 + 4104);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 3896);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t8 = (4 - 3);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t4 = (t5 + t10);
    t6 = (t0 + 2328U);
    t7 = *((char **)t6);
    t16 = (3 - 3);
    t13 = (t16 * -1);
    t17 = (1U * t13);
    t18 = (0 + t17);
    t6 = (t7 + t18);
    t19 = *((unsigned char *)t6);
    t20 = ((IEEE_P_2592010699) + 4024);
    t21 = (t11 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 3;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 3);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t14 = xsi_base_array_concat(t14, t3, t20, (char)97, t4, t11, (char)99, t19, (char)101);
    t22 = (t0 + 2208U);
    t25 = *((char **)t22);
    t22 = (t25 + 0);
    t24 = (4U + 1U);
    memcpy(t22, t14, t24);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);
    t8 = (3 - 2);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t11 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 2;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t16 = (0 - 2);
    t13 = (t16 * -1);
    t13 = (t13 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t13;
    t4 = xsi_base_array_concat(t4, t3, t5, (char)97, t1, t11, (char)99, (unsigned char)2, (char)101);
    t7 = (t0 + 2328U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    t13 = (3U + 1U);
    memcpy(t7, t4, t13);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t1 = (t0 + 5856U);
    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t4 = (t0 + 5856U);
    t19 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t5, t4);
    if (t19 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 5930);
    t12 = *((int *)t1);
    t2 = (t0 + 5934);
    t15 = *((int *)t2);
    if (t12 == t15)
        goto LAB5;

LAB9:    t16 = (t12 + 1);
    t12 = t16;
    t4 = (t0 + 5930);
    *((int *)t4) = t12;
    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    t6 = (t0 + 2208U);
    t7 = *((char **)t6);
    t6 = (t0 + 5856U);
    t14 = (t0 + 2088U);
    t20 = *((char **)t14);
    t14 = (t0 + 5856U);
    t21 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t3, t7, t6, t20, t14);
    t22 = (t0 + 2208U);
    t25 = *((char **)t22);
    t22 = (t25 + 0);
    t26 = (t3 + 12U);
    t8 = *((unsigned int *)t26);
    t9 = (1U * t8);
    memcpy(t22, t21, t9);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);
    t16 = (0 - 3);
    t8 = (t16 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB7;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0,(void *)work_a_1774854872_3212880686_p_1};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/main_tb_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
}
