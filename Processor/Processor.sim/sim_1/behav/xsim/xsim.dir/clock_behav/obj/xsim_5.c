/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_1160(char*, char *);
extern void execute_1161(char*, char *);
extern void execute_1204(char*, char *);
extern void execute_1202(char*, char *);
extern void execute_1203(char*, char *);
extern void execute_4(char*, char *);
extern void execute_5(char*, char *);
extern void execute_7(char*, char *);
extern void execute_8(char*, char *);
extern void execute_1183(char*, char *);
extern void execute_1184(char*, char *);
extern void execute_1185(char*, char *);
extern void execute_1186(char*, char *);
extern void execute_1187(char*, char *);
extern void execute_1188(char*, char *);
extern void execute_1189(char*, char *);
extern void execute_1190(char*, char *);
extern void execute_1191(char*, char *);
extern void execute_1192(char*, char *);
extern void execute_1193(char*, char *);
extern void execute_1194(char*, char *);
extern void execute_1195(char*, char *);
extern void execute_1196(char*, char *);
extern void execute_1197(char*, char *);
extern void execute_1198(char*, char *);
extern void execute_1199(char*, char *);
extern void execute_1200(char*, char *);
extern void execute_1201(char*, char *);
extern void execute_1121(char*, char *);
extern void execute_1122(char*, char *);
extern void execute_1123(char*, char *);
extern void execute_1125(char*, char *);
extern void execute_1126(char*, char *);
extern void execute_1128(char*, char *);
extern void execute_1129(char*, char *);
extern void execute_1130(char*, char *);
extern void execute_1131(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_1133(char*, char *);
extern void execute_1134(char*, char *);
extern void execute_1135(char*, char *);
extern void execute_1136(char*, char *);
extern void execute_1169(char*, char *);
extern void execute_1138(char*, char *);
extern void execute_1139(char*, char *);
extern void execute_1140(char*, char *);
extern void execute_1142(char*, char *);
extern void execute_1143(char*, char *);
extern void execute_1145(char*, char *);
extern void execute_1149(char*, char *);
extern void execute_1151(char*, char *);
extern void execute_1152(char*, char *);
extern void execute_1154(char*, char *);
extern void execute_1155(char*, char *);
extern void execute_1157(char*, char *);
extern void execute_1159(char*, char *);
extern void execute_1163(char*, char *);
extern void execute_1164(char*, char *);
extern void execute_1165(char*, char *);
extern void execute_1205(char*, char *);
extern void execute_1206(char*, char *);
extern void execute_1207(char*, char *);
extern void execute_1208(char*, char *);
extern void execute_1209(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_48(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[67] = {(funcp)execute_1160, (funcp)execute_1161, (funcp)execute_1204, (funcp)execute_1202, (funcp)execute_1203, (funcp)execute_4, (funcp)execute_5, (funcp)execute_7, (funcp)execute_8, (funcp)execute_1183, (funcp)execute_1184, (funcp)execute_1185, (funcp)execute_1186, (funcp)execute_1187, (funcp)execute_1188, (funcp)execute_1189, (funcp)execute_1190, (funcp)execute_1191, (funcp)execute_1192, (funcp)execute_1193, (funcp)execute_1194, (funcp)execute_1195, (funcp)execute_1196, (funcp)execute_1197, (funcp)execute_1198, (funcp)execute_1199, (funcp)execute_1200, (funcp)execute_1201, (funcp)execute_1121, (funcp)execute_1122, (funcp)execute_1123, (funcp)execute_1125, (funcp)execute_1126, (funcp)execute_1128, (funcp)execute_1129, (funcp)execute_1130, (funcp)execute_1131, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_1133, (funcp)execute_1134, (funcp)execute_1135, (funcp)execute_1136, (funcp)execute_1169, (funcp)execute_1138, (funcp)execute_1139, (funcp)execute_1140, (funcp)execute_1142, (funcp)execute_1143, (funcp)execute_1145, (funcp)execute_1149, (funcp)execute_1151, (funcp)execute_1152, (funcp)execute_1154, (funcp)execute_1155, (funcp)execute_1157, (funcp)execute_1159, (funcp)execute_1163, (funcp)execute_1164, (funcp)execute_1165, (funcp)execute_1205, (funcp)execute_1206, (funcp)execute_1207, (funcp)execute_1208, (funcp)execute_1209, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_17, (funcp)transaction_48};
const int NumRelocateId= 67;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/clock_behav/xsim.reloc",  (void **)funcTab, 67);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/clock_behav/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/clock_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/clock_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/clock_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/clock_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
