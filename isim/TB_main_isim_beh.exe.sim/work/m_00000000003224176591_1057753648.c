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
static const char *ng0 = "C:/Users/Raim/Documents/Diseno Logico Digital/PatoHunter/Bullet_Drawer.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {8, 0};
static unsigned int ng4[] = {42U, 0U};
static int ng5[] = {1, 0};



static void Always_14_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t18[8];
    char t22[8];
    char t23[8];
    char t24[8];
    char t32[8];
    char t73[8];
    char t76[8];
    char t91[8];
    char t92[8];
    char t96[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2100);
    *((int *)t2) = 1;
    t3 = (t0 + 1932);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 10, t3, 10, t4, 10);
    memset(t8, 0, 8);
    t2 = (t7 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t14 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t32, t8, 8);

LAB12:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB2;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t5 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 876U);
    t20 = *((char **)t19);
    xsi_vlogtype_sign_extend(t18, 32, t20, 10);
    t19 = (t0 + 1060U);
    t21 = *((char **)t19);
    t19 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t21, 10, t19, 32);
    memset(t23, 0, 8);
    xsi_vlog_signed_leq(t23, 32, t18, 32, t22, 32);
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t25) != 0)
        goto LAB15;

LAB16:    t33 = *((unsigned int *)t8);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t8 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t24) = 1;
    goto LAB16;

LAB15:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB16;

LAB17:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t8 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t8);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB19;

LAB20:    xsi_set_current_line(17, ng0);

LAB23:    xsi_set_current_line(18, ng0);
    t70 = (t0 + 784U);
    t71 = *((char **)t70);
    t70 = (t0 + 968U);
    t72 = *((char **)t70);
    memset(t73, 0, 8);
    t70 = (t71 + 4);
    if (*((unsigned int *)t70) != 0)
        goto LAB25;

LAB24:    t74 = (t72 + 4);
    if (*((unsigned int *)t74) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t71) < *((unsigned int *)t72))
        goto LAB27;

LAB26:    *((unsigned int *)t73) = 1;

LAB27:    memset(t76, 0, 8);
    t77 = (t73 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t77) != 0)
        goto LAB31;

LAB32:    t84 = (t76 + 4);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB33;

LAB34:    memcpy(t104, t76, 8);

LAB35:    t136 = (t104 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t104);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB22;

LAB25:    t75 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t76) = 1;
    goto LAB32;

LAB31:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB32;

LAB33:    t88 = (t0 + 784U);
    t89 = *((char **)t88);
    t88 = (t0 + 968U);
    t90 = *((char **)t88);
    t88 = ((char*)((ng3)));
    memset(t91, 0, 8);
    xsi_vlog_unsigned_add(t91, 32, t90, 10, t88, 32);
    memset(t92, 0, 8);
    t93 = (t89 + 4);
    if (*((unsigned int *)t93) != 0)
        goto LAB37;

LAB36:    t94 = (t91 + 4);
    if (*((unsigned int *)t94) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t89) < *((unsigned int *)t91))
        goto LAB38;

LAB39:    memset(t96, 0, 8);
    t97 = (t92 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t92);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t97) != 0)
        goto LAB43;

LAB44:    t105 = *((unsigned int *)t76);
    t106 = *((unsigned int *)t96);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t76 + 4);
    t109 = (t96 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t95 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t92) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t96) = 1;
    goto LAB44;

LAB43:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB44;

LAB45:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t76 + 4);
    t119 = (t96 + 4);
    t120 = *((unsigned int *)t76);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t96);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB47;

LAB48:    xsi_set_current_line(18, ng0);

LAB51:    xsi_set_current_line(19, ng0);
    t142 = ((char*)((ng4)));
    t143 = (t0 + 1288);
    xsi_vlogvar_assign_value(t143, t142, 0, 0, 6);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB50;

LAB52:    xsi_set_current_line(24, ng0);

LAB55:    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB54;

}


extern void work_m_00000000003224176591_1057753648_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000003224176591_1057753648", "isim/TB_main_isim_beh.exe.sim/work/m_00000000003224176591_1057753648.didat");
	xsi_register_executes(pe);
}
