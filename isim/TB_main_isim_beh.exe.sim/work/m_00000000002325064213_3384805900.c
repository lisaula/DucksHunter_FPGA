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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Raim/Documents/Diseno Logico Digital/PatoHunter/Ducks_Drawer.v";
static int ng1[] = {0, 0};
static int ng2[] = {59, 0};
static int ng3[] = {68, 0};
static int ng4[] = {1, 0};



static void Always_13_0(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2008);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB8;

LAB9:    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(26, ng0);

LAB24:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);

LAB13:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(18, ng0);

LAB14:    xsi_set_current_line(19, ng0);
    t14 = (t0 + 784U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t15 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB16;

LAB15:    t18 = (t14 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t15) < *((unsigned int *)t14))
        goto LAB17;

LAB18:    t20 = (t16 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB13;

LAB16:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(20, ng0);

LAB23:    xsi_set_current_line(21, ng0);
    t26 = ((char*)((ng4)));
    t27 = (t0 + 1196);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 12, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 12);
    goto LAB22;

LAB25:    xsi_set_current_line(30, ng0);

LAB28:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

}


extern void work_m_00000000002325064213_3384805900_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000002325064213_3384805900", "isim/TB_main_isim_beh.exe.sim/work/m_00000000002325064213_3384805900.didat");
	xsi_register_executes(pe);
}
