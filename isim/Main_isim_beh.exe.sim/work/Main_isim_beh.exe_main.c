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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000002399568039_3574923728_init();
    unisims_ver_m_00000000002557334010_3100994011_init();
    unisims_ver_m_00000000002557334010_0635491122_init();
    unisims_ver_m_00000000002393387159_0973828799_init();
    unisims_ver_m_00000000001639448493_3990129425_init();
    work_m_00000000002516236979_2151860221_init();
    work_m_00000000002325064213_3384805900_init();
    work_m_00000000002626766334_2412897520_init();
    work_m_00000000001149654992_0278510408_init();
    work_m_00000000001220024585_1960313788_init();
    work_m_00000000002339432008_2973510161_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002339432008_2973510161");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
