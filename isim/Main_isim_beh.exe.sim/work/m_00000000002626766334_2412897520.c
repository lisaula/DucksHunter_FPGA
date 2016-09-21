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
static const char *ng0 = "C:/Users/Raim/Documents/Diseno Logico Digital/PatoHunter/Gun.v";
static int ng1[] = {0, 0};
static int ng2[] = {465, 0};
static int ng3[] = {480, 0};
static int ng4[] = {289, 0};
static int ng5[] = {382, 0};
static int ng6[] = {1, 0};
static int ng7[] = {258, 0};



static void Always_16_0(char *t0)
{
    char t6[8];
    char t8[8];
    char t22[8];
    char t26[8];
    char t34[8];
    char t77[8];
    char t78[8];
    char t82[8];
    char t99[8];
    char t100[8];
    char t104[8];
    char t112[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
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

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2284);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(19, ng0);
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

LAB10:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB8;

LAB9:    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t9) != 0)
        goto LAB13;

LAB14:    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB15;

LAB16:    memcpy(t34, t8, 8);

LAB17:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB64:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB2;

LAB7:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t8) = 1;
    goto LAB14;

LAB13:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB15:    t20 = (t0 + 876U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB18:    t24 = (t20 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t21) < *((unsigned int *)t20))
        goto LAB20;

LAB21:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t27) != 0)
        goto LAB25;

LAB26:    t35 = *((unsigned int *)t8);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t8 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t22) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t26) = 1;
    goto LAB26;

LAB25:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB26;

LAB27:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t8 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t8);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB29;

LAB30:    xsi_set_current_line(20, ng0);

LAB33:    xsi_set_current_line(21, ng0);
    t72 = (t0 + 784U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng4)));
    t74 = (t0 + 1564);
    t75 = (t74 + 36U);
    t76 = *((char **)t75);
    memset(t77, 0, 8);
    xsi_vlog_unsigned_add(t77, 32, t72, 32, t76, 9);
    memset(t78, 0, 8);
    t79 = (t73 + 4);
    if (*((unsigned int *)t79) != 0)
        goto LAB35;

LAB34:    t80 = (t77 + 4);
    if (*((unsigned int *)t80) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t73) < *((unsigned int *)t77))
        goto LAB37;

LAB36:    *((unsigned int *)t78) = 1;

LAB37:    memset(t82, 0, 8);
    t83 = (t78 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t78);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t83) != 0)
        goto LAB41;

LAB42:    t90 = (t82 + 4);
    t91 = *((unsigned int *)t82);
    t92 = *((unsigned int *)t90);
    t93 = (t91 || t92);
    if (t93 > 0)
        goto LAB43;

LAB44:    memcpy(t112, t82, 8);

LAB45:    t144 = (t112 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t112);
    t148 = (t147 & t146);
    t149 = (t148 != 0);
    if (t149 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB32;

LAB35:    t81 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t82) = 1;
    goto LAB42;

LAB41:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB42;

LAB43:    t94 = (t0 + 784U);
    t95 = *((char **)t94);
    t94 = ((char*)((ng5)));
    t96 = (t0 + 1564);
    t97 = (t96 + 36U);
    t98 = *((char **)t97);
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 32, t94, 32, t98, 9);
    memset(t100, 0, 8);
    t101 = (t95 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB47;

LAB46:    t102 = (t99 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t95) > *((unsigned int *)t99))
        goto LAB49;

LAB48:    *((unsigned int *)t100) = 1;

LAB49:    memset(t104, 0, 8);
    t105 = (t100 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t100);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t105) != 0)
        goto LAB53;

LAB54:    t113 = *((unsigned int *)t82);
    t114 = *((unsigned int *)t104);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t82 + 4);
    t117 = (t104 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB45;

LAB47:    t103 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t104) = 1;
    goto LAB54;

LAB53:    t111 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB54;

LAB55:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t82 + 4);
    t127 = (t104 + 4);
    t128 = *((unsigned int *)t82);
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
    goto LAB57;

LAB58:    xsi_set_current_line(22, ng0);

LAB61:    xsi_set_current_line(23, ng0);
    t150 = ((char*)((ng1)));
    t151 = (t0 + 1380);
    xsi_vlogvar_assign_value(t151, t150, 0, 0, 6);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB62:    xsi_set_current_line(28, ng0);

LAB65:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t9, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t7, 9, t6, 32);
    t15 = (t8 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t28 = (t19 & t18);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB64;

LAB66:    xsi_set_current_line(29, ng0);

LAB69:    xsi_set_current_line(30, ng0);
    t16 = (t0 + 1564);
    t20 = (t16 + 36U);
    t21 = *((char **)t20);
    t23 = ((char*)((ng6)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t21, 9, t23, 32);
    t24 = (t0 + 1564);
    xsi_vlogvar_assign_value(t24, t22, 0, 0, 9);
    goto LAB68;

LAB70:    xsi_set_current_line(32, ng0);

LAB73:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t7, 9, t9, 32);
    t15 = (t6 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t6);
    t28 = (t19 & t18);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB74;

LAB75:
LAB76:    goto LAB72;

LAB74:    xsi_set_current_line(33, ng0);

LAB77:    xsi_set_current_line(34, ng0);
    t16 = (t0 + 1564);
    t20 = (t16 + 36U);
    t21 = *((char **)t20);
    t23 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t21, 9, t23, 32);
    t24 = (t0 + 1564);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 9);
    goto LAB76;

LAB78:    xsi_set_current_line(37, ng0);

LAB81:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    goto LAB80;

}


extern void work_m_00000000002626766334_2412897520_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_00000000002626766334_2412897520", "isim/Main_isim_beh.exe.sim/work/m_00000000002626766334_2412897520.didat");
	xsi_register_executes(pe);
}
