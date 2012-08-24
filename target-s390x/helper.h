#include "exec/def-helper.h"

DEF_HELPER_2(exception, void, env, i32)
DEF_HELPER_4(nc, i32, env, i32, i64, i64)
DEF_HELPER_4(oc, i32, env, i32, i64, i64)
DEF_HELPER_4(xc, i32, env, i32, i64, i64)
DEF_HELPER_4(mvc, void, env, i32, i64, i64)
DEF_HELPER_4(clc, i32, env, i32, i64, i64)
DEF_HELPER_3(mvcl, i32, env, i32, i32)
DEF_HELPER_4(clm, i32, env, i32, i32, i64)
DEF_HELPER_FLAGS_3(mul128, TCG_CALL_NO_RWG, i64, env, i64, i64)
DEF_HELPER_3(divs32, s64, env, s64, s64)
DEF_HELPER_3(divu32, i64, env, i64, i64)
DEF_HELPER_3(divs64, s64, env, s64, s64)
DEF_HELPER_4(divu64, i64, env, i64, i64, i64)
DEF_HELPER_4(srst, i64, env, i64, i64, i64)
DEF_HELPER_4(clst, i64, env, i64, i64, i64)
DEF_HELPER_4(mvpg, void, env, i64, i64, i64)
DEF_HELPER_4(mvst, i64, env, i64, i64, i64)
DEF_HELPER_4(csg, i64, env, i64, i64, i64)
DEF_HELPER_4(cdsg, i32, env, i32, i64, i32)
DEF_HELPER_4(cs, i64, env, i64, i64, i64)
DEF_HELPER_5(ex, i32, env, i32, i64, i64, i64)
DEF_HELPER_FLAGS_1(abs_i32, TCG_CALL_NO_RWG_SE, i32, s32)
DEF_HELPER_FLAGS_1(nabs_i32, TCG_CALL_NO_RWG_SE, s32, s32)
DEF_HELPER_FLAGS_1(abs_i64, TCG_CALL_NO_RWG_SE, i64, s64)
DEF_HELPER_FLAGS_1(nabs_i64, TCG_CALL_NO_RWG_SE, s64, s64)
DEF_HELPER_4(stam, void, env, i32, i64, i32)
DEF_HELPER_4(lam, void, env, i32, i64, i32)
DEF_HELPER_4(mvcle, i32, env, i32, i64, i32)
DEF_HELPER_4(clcle, i32, env, i32, i64, i32)
DEF_HELPER_3(cegb, i64, env, s64, i32)
DEF_HELPER_3(cdgb, i64, env, s64, i32)
DEF_HELPER_3(cxgb, i64, env, s64, i32)
DEF_HELPER_3(aeb, i64, env, i64, i64)
DEF_HELPER_3(adb, i64, env, i64, i64)
DEF_HELPER_5(axb, i64, env, i64, i64, i64, i64)
DEF_HELPER_3(seb, i64, env, i64, i64)
DEF_HELPER_3(sdb, i64, env, i64, i64)
DEF_HELPER_5(sxb, i64, env, i64, i64, i64, i64)
DEF_HELPER_3(deb, i64, env, i64, i64)
DEF_HELPER_3(ddb, i64, env, i64, i64)
DEF_HELPER_5(dxb, i64, env, i64, i64, i64, i64)
DEF_HELPER_3(meeb, i64, env, i64, i64)
DEF_HELPER_3(mdeb, i64, env, i64, i64)
DEF_HELPER_3(mdb, i64, env, i64, i64)
DEF_HELPER_5(mxb, i64, env, i64, i64, i64, i64)
DEF_HELPER_4(mxdb, i64, env, i64, i64, i64)
DEF_HELPER_2(ldeb, i64, env, i64)
DEF_HELPER_3(ldxb, i64, env, i64, i64)
DEF_HELPER_2(lxdb, i64, env, i64)
DEF_HELPER_2(lxeb, i64, env, i64)
DEF_HELPER_2(ledb, i64, env, i64)
DEF_HELPER_3(lexb, i64, env, i64, i64)
DEF_HELPER_FLAGS_3(ceb, TCG_CALL_NO_WG_SE, i32, env, i64, i64)
DEF_HELPER_FLAGS_3(cdb, TCG_CALL_NO_WG_SE, i32, env, i64, i64)
DEF_HELPER_FLAGS_5(cxb, TCG_CALL_NO_WG_SE, i32, env, i64, i64, i64, i64)
DEF_HELPER_3(cgeb, i64, env, i64, i32)
DEF_HELPER_3(cgdb, i64, env, i64, i32)
DEF_HELPER_4(cgxb, i64, env, i64, i64, i32)
DEF_HELPER_3(cfeb, i64, env, i64, i32)
DEF_HELPER_3(cfdb, i64, env, i64, i32)
DEF_HELPER_4(cfxb, i64, env, i64, i64, i32)
DEF_HELPER_4(maeb, i64, env, i64, i64, i64)
DEF_HELPER_4(madb, i64, env, i64, i64, i64)
DEF_HELPER_4(mseb, i64, env, i64, i64, i64)
DEF_HELPER_4(msdb, i64, env, i64, i64, i64)
DEF_HELPER_FLAGS_2(tceb, TCG_CALL_NO_RWG_SE, i32, i64, i64)
DEF_HELPER_FLAGS_2(tcdb, TCG_CALL_NO_RWG_SE, i32, i64, i64)
DEF_HELPER_FLAGS_3(tcxb, TCG_CALL_NO_RWG_SE, i32, i64, i64, i64)
DEF_HELPER_FLAGS_1(clz, TCG_CALL_NO_RWG_SE, i64, i64)
DEF_HELPER_2(sqeb, i64, env, i64)
DEF_HELPER_2(sqdb, i64, env, i64)
DEF_HELPER_3(sqxb, i64, env, i64, i64)
DEF_HELPER_FLAGS_1(cvd, TCG_CALL_NO_RWG_SE, i64, s32)
DEF_HELPER_4(unpk, void, env, i32, i64, i64)
DEF_HELPER_4(tr, void, env, i32, i64, i64)
DEF_HELPER_4(cksm, i64, env, i64, i64, i64)
DEF_HELPER_FLAGS_5(calc_cc, TCG_CALL_NO_RWG_SE, i32, env, i32, i64, i64, i64)
DEF_HELPER_FLAGS_2(sfpc, TCG_CALL_NO_RWG, void, env, i64)

#ifndef CONFIG_USER_ONLY
DEF_HELPER_3(servc, i32, env, i32, i64)
DEF_HELPER_4(diag, i64, env, i32, i64, i64)
DEF_HELPER_3(load_psw, void, env, i64, i64)
DEF_HELPER_FLAGS_2(stidp, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(spx, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_1(sck, TCG_CALL_NO_RWG, i32, i64)
DEF_HELPER_2(stck, i32, env, i64)
DEF_HELPER_2(stcke, i32, env, i64)
DEF_HELPER_FLAGS_2(sckc, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(stckc, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(spt, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_FLAGS_2(stpt, TCG_CALL_NO_RWG, void, env, i64)
DEF_HELPER_4(stsi, i32, env, i64, i32, i32)
DEF_HELPER_4(lctl, void, env, i32, i64, i32)
DEF_HELPER_4(lctlg, void, env, i32, i64, i32)
DEF_HELPER_4(stctl, void, env, i32, i64, i32)
DEF_HELPER_4(stctg, void, env, i32, i64, i32)
DEF_HELPER_FLAGS_2(tprot, TCG_CALL_NO_RWG, i32, i64, i64)
DEF_HELPER_FLAGS_2(iske, TCG_CALL_NO_RWG_SE, i64, env, i64)
DEF_HELPER_FLAGS_3(sske, TCG_CALL_NO_RWG, void, env, i32, i64)
DEF_HELPER_FLAGS_3(rrbe, TCG_CALL_NO_RWG, i32, env, i32, i64)
DEF_HELPER_3(csp, i32, env, i32, i32)
DEF_HELPER_4(mvcs, i32, env, i64, i64, i64)
DEF_HELPER_4(mvcp, i32, env, i64, i64, i64)
DEF_HELPER_4(sigp, i32, env, i64, i32, i64)
DEF_HELPER_2(sacf, void, env, i64)
DEF_HELPER_FLAGS_3(ipte, TCG_CALL_NO_RWG, void, env, i64, i64)
DEF_HELPER_FLAGS_1(ptlb, TCG_CALL_NO_RWG, void, env)
DEF_HELPER_2(lra, i64, env, i64)
DEF_HELPER_3(stura, void, env, i64, i32)
#endif

#include "exec/def-helper.h"
