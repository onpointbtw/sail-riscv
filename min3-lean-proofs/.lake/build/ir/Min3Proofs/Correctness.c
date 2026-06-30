// Lean compiler output
// Module: Min3Proofs.Correctness
// Imports: public import Init public import LeanRV64D.InstsEnd
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t l_BitVec_slt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs_spec__min__s(lean_object*, lean_object*);
lean_object* lp_Lean__RV64D_LeanRV64D_Functions_rX__bits(lean_object*, lean_object*);
lean_object* lp_Lean__RV64D_LeanRV64D_Functions_wX__bits(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs_spec__min3__impl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_encdec__reg__forwards_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_encdec__reg__forwards_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_min3proofs_spec__min__s(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(64u);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_BitVec_slt(x_3, x_1, x_2);
if (x_4 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs_spec__min3__impl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_Lean__RV64D_LeanRV64D_Functions_rX__bits(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec_ref(x_5);
x_8 = lp_Lean__RV64D_LeanRV64D_Functions_rX__bits(x_2, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec_ref(x_8);
x_11 = lp_min3proofs_spec__min__s(x_6, x_9);
x_12 = lp_Lean__RV64D_LeanRV64D_Functions_wX__bits(x_3, x_11, x_10);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_8, 0);
lean_dec(x_14);
x_15 = lean_box(1);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_5);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_5, 0);
lean_dec(x_20);
x_21 = lean_box(1);
lean_ctor_set(x_5, 0, x_21);
return x_5;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_box(1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_encdec__reg__forwards_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_encdec__reg__forwards_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__4_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__4_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec_ref(x_2);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_2(x_3, x_1, lean_box(0));
return x_6;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_reg__name__forwards_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_apply_2(x_4, x_2, lean_box(0));
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33) {
_start:
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_nat_dec_eq(x_1, x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_2);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_dec_eq(x_1, x_36);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
lean_dec(x_3);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_nat_dec_eq(x_1, x_38);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
lean_dec(x_4);
x_40 = lean_unsigned_to_nat(3u);
x_41 = lean_nat_dec_eq(x_1, x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
lean_dec(x_5);
x_42 = lean_unsigned_to_nat(4u);
x_43 = lean_nat_dec_eq(x_1, x_42);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
lean_dec(x_6);
x_44 = lean_unsigned_to_nat(5u);
x_45 = lean_nat_dec_eq(x_1, x_44);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_7);
x_46 = lean_unsigned_to_nat(6u);
x_47 = lean_nat_dec_eq(x_1, x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_8);
x_48 = lean_unsigned_to_nat(7u);
x_49 = lean_nat_dec_eq(x_1, x_48);
if (x_49 == 0)
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_9);
x_50 = lean_unsigned_to_nat(8u);
x_51 = lean_nat_dec_eq(x_1, x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
lean_dec(x_10);
x_52 = lean_unsigned_to_nat(9u);
x_53 = lean_nat_dec_eq(x_1, x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
lean_dec(x_11);
x_54 = lean_unsigned_to_nat(10u);
x_55 = lean_nat_dec_eq(x_1, x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; 
lean_dec(x_12);
x_56 = lean_unsigned_to_nat(11u);
x_57 = lean_nat_dec_eq(x_1, x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
lean_dec(x_13);
x_58 = lean_unsigned_to_nat(12u);
x_59 = lean_nat_dec_eq(x_1, x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
lean_dec(x_14);
x_60 = lean_unsigned_to_nat(13u);
x_61 = lean_nat_dec_eq(x_1, x_60);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
lean_dec(x_15);
x_62 = lean_unsigned_to_nat(14u);
x_63 = lean_nat_dec_eq(x_1, x_62);
if (x_63 == 0)
{
lean_object* x_64; uint8_t x_65; 
lean_dec(x_16);
x_64 = lean_unsigned_to_nat(15u);
x_65 = lean_nat_dec_eq(x_1, x_64);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
lean_dec(x_17);
x_66 = lean_unsigned_to_nat(16u);
x_67 = lean_nat_dec_eq(x_1, x_66);
if (x_67 == 0)
{
lean_object* x_68; uint8_t x_69; 
lean_dec(x_18);
x_68 = lean_unsigned_to_nat(17u);
x_69 = lean_nat_dec_eq(x_1, x_68);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
lean_dec(x_19);
x_70 = lean_unsigned_to_nat(18u);
x_71 = lean_nat_dec_eq(x_1, x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
lean_dec(x_20);
x_72 = lean_unsigned_to_nat(19u);
x_73 = lean_nat_dec_eq(x_1, x_72);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
lean_dec(x_21);
x_74 = lean_unsigned_to_nat(20u);
x_75 = lean_nat_dec_eq(x_1, x_74);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
lean_dec(x_22);
x_76 = lean_unsigned_to_nat(21u);
x_77 = lean_nat_dec_eq(x_1, x_76);
if (x_77 == 0)
{
lean_object* x_78; uint8_t x_79; 
lean_dec(x_23);
x_78 = lean_unsigned_to_nat(22u);
x_79 = lean_nat_dec_eq(x_1, x_78);
if (x_79 == 0)
{
lean_object* x_80; uint8_t x_81; 
lean_dec(x_24);
x_80 = lean_unsigned_to_nat(23u);
x_81 = lean_nat_dec_eq(x_1, x_80);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
lean_dec(x_25);
x_82 = lean_unsigned_to_nat(24u);
x_83 = lean_nat_dec_eq(x_1, x_82);
if (x_83 == 0)
{
lean_object* x_84; uint8_t x_85; 
lean_dec(x_26);
x_84 = lean_unsigned_to_nat(25u);
x_85 = lean_nat_dec_eq(x_1, x_84);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
lean_dec(x_27);
x_86 = lean_unsigned_to_nat(26u);
x_87 = lean_nat_dec_eq(x_1, x_86);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
lean_dec(x_28);
x_88 = lean_unsigned_to_nat(27u);
x_89 = lean_nat_dec_eq(x_1, x_88);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; 
lean_dec(x_29);
x_90 = lean_unsigned_to_nat(28u);
x_91 = lean_nat_dec_eq(x_1, x_90);
if (x_91 == 0)
{
lean_object* x_92; uint8_t x_93; 
lean_dec(x_30);
x_92 = lean_unsigned_to_nat(29u);
x_93 = lean_nat_dec_eq(x_1, x_92);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; 
lean_dec(x_31);
x_94 = lean_unsigned_to_nat(30u);
x_95 = lean_nat_dec_eq(x_1, x_94);
if (x_95 == 0)
{
lean_object* x_96; 
lean_dec(x_32);
{ lean_object* _aargs[] = {x_1, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
x_96 = lean_apply_m(x_33, 32, _aargs); }
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_33);
lean_dec(x_1);
x_97 = lean_box(0);
x_98 = lean_apply_1(x_32, x_97);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_1);
x_99 = lean_box(0);
x_100 = lean_apply_1(x_31, x_99);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_1);
x_101 = lean_box(0);
x_102 = lean_apply_1(x_30, x_101);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_1);
x_103 = lean_box(0);
x_104 = lean_apply_1(x_29, x_103);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_1);
x_105 = lean_box(0);
x_106 = lean_apply_1(x_28, x_105);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_107 = lean_box(0);
x_108 = lean_apply_1(x_27, x_107);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_1);
x_109 = lean_box(0);
x_110 = lean_apply_1(x_26, x_109);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_1);
x_111 = lean_box(0);
x_112 = lean_apply_1(x_25, x_111);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_1);
x_113 = lean_box(0);
x_114 = lean_apply_1(x_24, x_113);
return x_114;
}
}
else
{
lean_object* x_115; lean_object* x_116; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_1);
x_115 = lean_box(0);
x_116 = lean_apply_1(x_23, x_115);
return x_116;
}
}
else
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_1);
x_117 = lean_box(0);
x_118 = lean_apply_1(x_22, x_117);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_1);
x_119 = lean_box(0);
x_120 = lean_apply_1(x_21, x_119);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_1);
x_121 = lean_box(0);
x_122 = lean_apply_1(x_20, x_121);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_1);
x_123 = lean_box(0);
x_124 = lean_apply_1(x_19, x_123);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_1);
x_125 = lean_box(0);
x_126 = lean_apply_1(x_18, x_125);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_1);
x_127 = lean_box(0);
x_128 = lean_apply_1(x_17, x_127);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_1);
x_129 = lean_box(0);
x_130 = lean_apply_1(x_16, x_129);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_1);
x_131 = lean_box(0);
x_132 = lean_apply_1(x_15, x_131);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_1);
x_133 = lean_box(0);
x_134 = lean_apply_1(x_14, x_133);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_1);
x_135 = lean_box(0);
x_136 = lean_apply_1(x_13, x_135);
return x_136;
}
}
else
{
lean_object* x_137; lean_object* x_138; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_137 = lean_box(0);
x_138 = lean_apply_1(x_12, x_137);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
x_139 = lean_box(0);
x_140 = lean_apply_1(x_11, x_139);
return x_140;
}
}
else
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_1);
x_141 = lean_box(0);
x_142 = lean_apply_1(x_10, x_141);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_143 = lean_box(0);
x_144 = lean_apply_1(x_9, x_143);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_145 = lean_box(0);
x_146 = lean_apply_1(x_8, x_145);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_147 = lean_box(0);
x_148 = lean_apply_1(x_7, x_147);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_149 = lean_box(0);
x_150 = lean_apply_1(x_6, x_149);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_151 = lean_box(0);
x_152 = lean_apply_1(x_5, x_151);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_153 = lean_box(0);
x_154 = lean_apply_1(x_4, x_153);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_155 = lean_box(0);
x_156 = lean_apply_1(x_3, x_155);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_157 = lean_box(0);
x_158 = lean_apply_1(x_2, x_157);
return x_158;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___redArg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
lean_object* x_33 = _args[32];
_start:
{
lean_object* x_34; 
x_34 = lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33);
return x_34;
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33, lean_object* x_34) {
_start:
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_eq(x_2, x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
lean_dec(x_3);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_dec_eq(x_2, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_4);
x_39 = lean_unsigned_to_nat(2u);
x_40 = lean_nat_dec_eq(x_2, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_5);
x_41 = lean_unsigned_to_nat(3u);
x_42 = lean_nat_dec_eq(x_2, x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
lean_dec(x_6);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_nat_dec_eq(x_2, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_7);
x_45 = lean_unsigned_to_nat(5u);
x_46 = lean_nat_dec_eq(x_2, x_45);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
lean_dec(x_8);
x_47 = lean_unsigned_to_nat(6u);
x_48 = lean_nat_dec_eq(x_2, x_47);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_9);
x_49 = lean_unsigned_to_nat(7u);
x_50 = lean_nat_dec_eq(x_2, x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
lean_dec(x_10);
x_51 = lean_unsigned_to_nat(8u);
x_52 = lean_nat_dec_eq(x_2, x_51);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
lean_dec(x_11);
x_53 = lean_unsigned_to_nat(9u);
x_54 = lean_nat_dec_eq(x_2, x_53);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; 
lean_dec(x_12);
x_55 = lean_unsigned_to_nat(10u);
x_56 = lean_nat_dec_eq(x_2, x_55);
if (x_56 == 0)
{
lean_object* x_57; uint8_t x_58; 
lean_dec(x_13);
x_57 = lean_unsigned_to_nat(11u);
x_58 = lean_nat_dec_eq(x_2, x_57);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; 
lean_dec(x_14);
x_59 = lean_unsigned_to_nat(12u);
x_60 = lean_nat_dec_eq(x_2, x_59);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
lean_dec(x_15);
x_61 = lean_unsigned_to_nat(13u);
x_62 = lean_nat_dec_eq(x_2, x_61);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; 
lean_dec(x_16);
x_63 = lean_unsigned_to_nat(14u);
x_64 = lean_nat_dec_eq(x_2, x_63);
if (x_64 == 0)
{
lean_object* x_65; uint8_t x_66; 
lean_dec(x_17);
x_65 = lean_unsigned_to_nat(15u);
x_66 = lean_nat_dec_eq(x_2, x_65);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
lean_dec(x_18);
x_67 = lean_unsigned_to_nat(16u);
x_68 = lean_nat_dec_eq(x_2, x_67);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_19);
x_69 = lean_unsigned_to_nat(17u);
x_70 = lean_nat_dec_eq(x_2, x_69);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
lean_dec(x_20);
x_71 = lean_unsigned_to_nat(18u);
x_72 = lean_nat_dec_eq(x_2, x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
lean_dec(x_21);
x_73 = lean_unsigned_to_nat(19u);
x_74 = lean_nat_dec_eq(x_2, x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
lean_dec(x_22);
x_75 = lean_unsigned_to_nat(20u);
x_76 = lean_nat_dec_eq(x_2, x_75);
if (x_76 == 0)
{
lean_object* x_77; uint8_t x_78; 
lean_dec(x_23);
x_77 = lean_unsigned_to_nat(21u);
x_78 = lean_nat_dec_eq(x_2, x_77);
if (x_78 == 0)
{
lean_object* x_79; uint8_t x_80; 
lean_dec(x_24);
x_79 = lean_unsigned_to_nat(22u);
x_80 = lean_nat_dec_eq(x_2, x_79);
if (x_80 == 0)
{
lean_object* x_81; uint8_t x_82; 
lean_dec(x_25);
x_81 = lean_unsigned_to_nat(23u);
x_82 = lean_nat_dec_eq(x_2, x_81);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; 
lean_dec(x_26);
x_83 = lean_unsigned_to_nat(24u);
x_84 = lean_nat_dec_eq(x_2, x_83);
if (x_84 == 0)
{
lean_object* x_85; uint8_t x_86; 
lean_dec(x_27);
x_85 = lean_unsigned_to_nat(25u);
x_86 = lean_nat_dec_eq(x_2, x_85);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
lean_dec(x_28);
x_87 = lean_unsigned_to_nat(26u);
x_88 = lean_nat_dec_eq(x_2, x_87);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; 
lean_dec(x_29);
x_89 = lean_unsigned_to_nat(27u);
x_90 = lean_nat_dec_eq(x_2, x_89);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; 
lean_dec(x_30);
x_91 = lean_unsigned_to_nat(28u);
x_92 = lean_nat_dec_eq(x_2, x_91);
if (x_92 == 0)
{
lean_object* x_93; uint8_t x_94; 
lean_dec(x_31);
x_93 = lean_unsigned_to_nat(29u);
x_94 = lean_nat_dec_eq(x_2, x_93);
if (x_94 == 0)
{
lean_object* x_95; uint8_t x_96; 
lean_dec(x_32);
x_95 = lean_unsigned_to_nat(30u);
x_96 = lean_nat_dec_eq(x_2, x_95);
if (x_96 == 0)
{
lean_object* x_97; 
lean_dec(x_33);
{ lean_object* _aargs[] = {x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
x_97 = lean_apply_m(x_34, 32, _aargs); }
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_dec(x_34);
lean_dec(x_2);
x_98 = lean_box(0);
x_99 = lean_apply_1(x_33, x_98);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_2);
x_100 = lean_box(0);
x_101 = lean_apply_1(x_32, x_100);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_2);
x_102 = lean_box(0);
x_103 = lean_apply_1(x_31, x_102);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_2);
x_104 = lean_box(0);
x_105 = lean_apply_1(x_30, x_104);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_2);
x_106 = lean_box(0);
x_107 = lean_apply_1(x_29, x_106);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_2);
x_108 = lean_box(0);
x_109 = lean_apply_1(x_28, x_108);
return x_109;
}
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_2);
x_110 = lean_box(0);
x_111 = lean_apply_1(x_27, x_110);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_2);
x_112 = lean_box(0);
x_113 = lean_apply_1(x_26, x_112);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_2);
x_114 = lean_box(0);
x_115 = lean_apply_1(x_25, x_114);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_2);
x_116 = lean_box(0);
x_117 = lean_apply_1(x_24, x_116);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_2);
x_118 = lean_box(0);
x_119 = lean_apply_1(x_23, x_118);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_2);
x_120 = lean_box(0);
x_121 = lean_apply_1(x_22, x_120);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_2);
x_122 = lean_box(0);
x_123 = lean_apply_1(x_21, x_122);
return x_123;
}
}
else
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_2);
x_124 = lean_box(0);
x_125 = lean_apply_1(x_20, x_124);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_2);
x_126 = lean_box(0);
x_127 = lean_apply_1(x_19, x_126);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_2);
x_128 = lean_box(0);
x_129 = lean_apply_1(x_18, x_128);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_2);
x_130 = lean_box(0);
x_131 = lean_apply_1(x_17, x_130);
return x_131;
}
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_2);
x_132 = lean_box(0);
x_133 = lean_apply_1(x_16, x_132);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_2);
x_134 = lean_box(0);
x_135 = lean_apply_1(x_15, x_134);
return x_135;
}
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_2);
x_136 = lean_box(0);
x_137 = lean_apply_1(x_14, x_136);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_138 = lean_box(0);
x_139 = lean_apply_1(x_13, x_138);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_2);
x_140 = lean_box(0);
x_141 = lean_apply_1(x_12, x_140);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_142 = lean_box(0);
x_143 = lean_apply_1(x_11, x_142);
return x_143;
}
}
else
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
x_144 = lean_box(0);
x_145 = lean_apply_1(x_10, x_144);
return x_145;
}
}
else
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
x_146 = lean_box(0);
x_147 = lean_apply_1(x_9, x_146);
return x_147;
}
}
else
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_148 = lean_box(0);
x_149 = lean_apply_1(x_8, x_148);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_150 = lean_box(0);
x_151 = lean_apply_1(x_7, x_150);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_152 = lean_box(0);
x_153 = lean_apply_1(x_6, x_152);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_154 = lean_box(0);
x_155 = lean_apply_1(x_5, x_154);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_156 = lean_box(0);
x_157 = lean_apply_1(x_4, x_156);
return x_157;
}
}
else
{
lean_object* x_158; lean_object* x_159; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_158 = lean_box(0);
x_159 = lean_apply_1(x_3, x_158);
return x_159;
}
}
}
LEAN_EXPORT lean_object* lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
lean_object* x_33 = _args[32];
lean_object* x_34 = _args[33];
_start:
{
lean_object* x_35; 
x_35 = lp_min3proofs___private_Min3Proofs_Correctness_0__LeanRV64D_Functions_rX_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33, x_34);
return x_35;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean__RV64D_LeanRV64D_InstsEnd(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_min3proofs_Min3Proofs_Correctness(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean__RV64D_LeanRV64D_InstsEnd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
