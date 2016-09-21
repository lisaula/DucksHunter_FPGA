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
static const char *ng0 = "C:/Users/Raim/Documents/Diseno Logico Digital/PatoHunter/Shot_Drawer.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {1, 0};
static int ng4[] = {8, 0};
static unsigned int ng5[] = {63U, 0U};



static void Always_14_0(char *t0)
{
    char t12[8];
    char t14[8];
    char t25[8];
    char t30[8];
    char t34[8];
    char t40[8];
    char t81[8];
    char t84[8];
    char t99[8];
    char t100[8];
    char t104[8];
    char t112[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2192);
    *((int *)t2) = 1;
    t3 = (t0 + 2024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t11 = (t3 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB15;

LAB14:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t3) < *((unsigned int *)t5))
        goto LAB17;

LAB16:    *((unsigned int *)t12) = 1;

LAB17:    memset(t14, 0, 8);
    t21 = (t12 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t21) != 0)
        goto LAB21;

LAB22:    t23 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t23);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB23;

LAB24:    memcpy(t40, t14, 8);

LAB25:    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t13 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t13, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t11, 10, t12, 32);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(17, ng0);

LAB13:    xsi_set_current_line(18, ng0);
    t21 = (t0 + 1472);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_signed_minus(t25, 32, t23, 10, t24, 32);
    t26 = (t0 + 1472);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 10);
    goto LAB12;

LAB15:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB17;

LAB19:    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB21:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB22;

LAB23:    t24 = (t0 + 968U);
    t26 = *((char **)t24);
    t24 = (t0 + 1472);
    t27 = (t24 + 36U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t28, 10, t29, 32);
    memset(t30, 0, 8);
    t31 = (t26 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB27;

LAB26:    t32 = (t25 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB29;

LAB28:    *((unsigned int *)t30) = 1;

LAB29:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t19 = *((unsigned int *)t35);
    t20 = (~(t19));
    t36 = *((unsigned int *)t30);
    t37 = (t36 & t20);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t35) != 0)
        goto LAB33;

LAB34:    t41 = *((unsigned int *)t14);
    t42 = *((unsigned int *)t34);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t14 + 4);
    t45 = (t34 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB25;

LAB27:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t34) = 1;
    goto LAB34;

LAB33:    t39 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB34;

LAB35:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t14 + 4);
    t55 = (t34 + 4);
    t56 = *((unsigned int *)t14);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB37;

LAB38:    xsi_set_current_line(21, ng0);

LAB41:    xsi_set_current_line(22, ng0);
    t78 = (t0 + 876U);
    t79 = *((char **)t78);
    t78 = (t0 + 1060U);
    t80 = *((char **)t78);
    memset(t81, 0, 8);
    t78 = (t79 + 4);
    if (*((unsigned int *)t78) != 0)
        goto LAB43;

LAB42:    t82 = (t80 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t79) < *((unsigned int *)t80))
        goto LAB45;

LAB44:    *((unsigned int *)t81) = 1;

LAB45:    memset(t84, 0, 8);
    t85 = (t81 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t85) != 0)
        goto LAB49;

LAB50:    t92 = (t84 + 4);
    t93 = *((unsigned int *)t84);
    t94 = *((unsigned int *)t92);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB51;

LAB52:    memcpy(t112, t84, 8);

LAB53:    t144 = (t112 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t112);
    t148 = (t147 & t146);
    t149 = (t148 != 0);
    if (t149 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB40;

LAB43:    t83 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB45;

LAB47:    *((unsigned int *)t84) = 1;
    goto LAB50;

LAB49:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB50;

LAB51:    t96 = (t0 + 876U);
    t97 = *((char **)t96);
    t96 = (t0 + 1060U);
    t98 = *((char **)t96);
    t96 = ((char*)((ng4)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 32, t98, 10, t96, 32);
    memset(t100, 0, 8);
    t101 = (t97 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB55;

LAB54:    t102 = (t99 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t97) < *((unsigned int *)t99))
        goto LAB56;

LAB57:    memset(t104, 0, 8);
    t105 = (t100 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t100);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t105) != 0)
        goto LAB61;

LAB62:    t113 = *((unsigned int *)t84);
    t114 = *((unsigned int *)t104);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t84 + 4);
    t117 = (t104 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB53;

LAB55:    t103 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t100) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t104) = 1;
    goto LAB62;

LAB61:    t111 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB62;

LAB63:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t84 + 4);
    t127 = (t104 + 4);
    t128 = *((unsigned int *)t84);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t104);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB65;

LAB66:    xsi_set_current_line(22, ng0);

LAB69:    xsi_set_current_line(23, ng0);
    t150 = ((char*)((ng3)));
    t151 = (t0 + 1380);
    xsi_vlogvar_assign_value(t151, t150, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB68;

LAB70:    xsi_set_current_line(28, ng0);

LAB73:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB72;

}


extern void work_m_00000000002177532343_0493791792_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000002177532343_0493791792", "isim/TB_main_isim_beh.exe.sim/work/m_00000000002177532343_0493791792.didat");
	xsi_register_executes(pe);
}
