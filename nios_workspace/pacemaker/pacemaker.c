/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
#include "pacemaker.h"
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <stdio.h>

/*****************************************************************************/
/*                 G E N E R A T E D       C    C O D E                      */
/*****************************************************************************/
/* KIELER - Kiel Integrated Environment for Layout Eclipse RichClient        */
/*                                                                           */
/* http://www.informatik.uni-kiel.de/rtsys/kieler/                           */
/* Copyright 2014 by                                                         */
/* + Kiel University                                                         */
/*   + Department of Computer Science                                        */
/*     + Real-Time and Embedded Systems Group                                */
/*                                                                           */
/* This code is provided under the terms of the Eclipse Public License (EPL).*/
/*****************************************************************************/
char VSense;
char LRIStart;
char LRIExpired;
char LRIStop;
char VPace;
char ASense;
char AEIStart;
char AVIStart;
char PVARPStart;
char VRPStart;
char URIStart;
char AEIExpired;
char AVIExpired;
char PVARPExpired;
char VRPExpired;
char URIExpired;
char AEIStop;
char AVIStop;
char PVARPStop;
char VRPStop;
char URIStop;
char APace;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char PRE_g5;
char g6;
char g7;
char PRE_g7;
char g8;
char g9;
char g10;
char PRE_g10;
char g11;
char g12;
char g13;
char g14;
char g15;
char g16;
char g17;
char g18;
char PRE_g18;
char g19;
char g20;
char PRE_g20;
char g21;
char g21b;
char g22;
char PRE_g22;
char g23;
char g23b;
char g24;
char g25;
char g26;
char g27;
char PRE_g27;
char g28;
char g28b;
char g29;
char g30;
char g31;
char PRE_g31;
char g32;
char g33;
char g34;
char g35;
char g36;
char PRE_g36;
char g37;
char g38;
char g39;
char PRE_g39;
char g40;
char g41;
char g42;
char g43;
char g44;
char g45;
char PRE_g45;
char g46;
char g47;
char g48;
char PRE_g48;
char g49;
char g50;
char g51;
char g52;
char g53;
char g54;
char PRE_g54;
char g55;
char g56;
char PRE_g56;
char g57;
char g58;
char PRE_g58;
char g59;
char g60;
char g61;
char PRE_g61;
char g62;
char g63;
char g64;
char g65;
char g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g70b;
char g71;
char PRE_g71;
char g72;
char g72b;
char g73;
char g74;
char g75;
char g76;
char g77;
char PRE_g77;
char g78;
char g79;
char g80;
char PRE_g80;
char g81;
char g82;
char PRE_g82;
char g83;
char g84;
char g85;
char PRE_g85;
char g86;
char g86b;
char g87;
char g88;
char g89;
char g90;
char g91;
char g92;
char g93;
char PRE_g93;
char g94;
char g94b;
char g95;
char PRE_g95;
char g96;
char g97;
char g98;
char g99;
char g100;
char PRE_g100;
char g101;
char g102;
char PRE_g102;
char g103;
char g104;
char PRE_g104;
char g105;
char g106;
char g107;
char PRE_g107;
char g108;
char g109;
char g110;
char g111;
char g112;
char g113;
char PRE_g113;
char g114;
char g114b;
char g115;
char PRE_g115;
char g116;
char g117;
char g118;
char g119;
char g120;
char g121;
char PRE_g121;
char g122;
char g123;
char g124;
char _GO;
char _cg13;
char _cg15;
char _cg4;
char _cg6;
char _cg14;
char _cg8;
char _cg11;
char _cg23;
char _cg28;
char _cg26;
char _cg19;
char _cg21;
char _cg24;
char _cg29;
char _cg32;
char _cg40;
char _cg42;
char _cg37;
char _cg41;
char _cg49;
char _cg51;
char _cg46;
char _cg50;
char _cg64;
char _cg66;
char _cg55;
char _cg57;
char _cg65;
char _cg59;
char _cg62;
char _cg72;
char _cg70;
char _cg73;
char _cg78;
char _cg81;
char _cg89;
char _cg83;
char _cg87;
char _cg96;
char _cg97;
char _cg94;
char _cg108;
char _cg110;
char _cg101;
char _cg103;
char _cg109;
char _cg105;
char _cg116;
char _cg117;
char _cg114;
char g16_e1;
char g34_e2;
char g43_e3;
char g52_e4;
char g67_e5;
char g75_e6;
char g91_e7;
char g98_e8;
char g111_e9;
char g118_e10;
char g119_fix0;
char g119_fix1;
char g119_e1_fix_fix;
char g119_e1_fix;
char g119_e1;
char g123_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g5 = 0;
   PRE_g7 = 0;
   PRE_g10 = 0;
   PRE_g18 = 0;
   PRE_g20 = 0;
   PRE_g22 = 0;
   PRE_g27 = 0;
   PRE_g31 = 0;
   PRE_g36 = 0;
   PRE_g39 = 0;
   PRE_g45 = 0;
   PRE_g48 = 0;
   PRE_g54 = 0;
   PRE_g56 = 0;
   PRE_g58 = 0;
   PRE_g61 = 0;
   PRE_g69 = 0;
   PRE_g71 = 0;
   PRE_g77 = 0;
   PRE_g80 = 0;
   PRE_g82 = 0;
   PRE_g85 = 0;
   PRE_g93 = 0;
   PRE_g95 = 0;
   PRE_g100 = 0;
   PRE_g102 = 0;
   PRE_g104 = 0;
   PRE_g107 = 0;
   PRE_g113 = 0;
   PRE_g115 = 0;
   PRE_g121 = 0;
   return;
}
void tick(){
   if(_PRE_GO == 1){
      _GO = 0;
   }
   {
      g0 = _GO;
      g1 = g0;
      g2 = g1;
      g122 =(PRE_g121);
      g120 = g0;
      g121 =(g122||g120);
      if(g121){
         AEIStart = 0;
         AVIStart = 0;
         PVARPStart = 0;
         VRPStart = 0;
         URIStart = 0;
         LRIStart = 0;
         AEIStop = 0;
         AVIStop = 0;
         PVARPStop = 0;
         VRPStop = 0;
         URIStop = 0;
         LRIStop = 0;
         APace = 0;
         VPace = 0;
      }
      g11 =(PRE_g10);
      _cg11 = VSense;
      g12 =(g11&&_cg11);
      if(g12){
         AVIStop =(AVIStop||1);
      }
      g13 =(g11&&(!(_cg11)));
      _cg13 = AVIExpired;
      g62 =(PRE_g61);
      _cg62 = ASense;
      g63 =(g62&&_cg62);
      if(g63){
         AEIStop =(AEIStop||1);
      }
      g72 =(PRE_g71);
      g72b = g72;
      _cg72 = AEIStop;
      g73 =(g72b&&(!(_cg72)));
      _cg73 = AEIExpired;
      g74 =(g73&&_cg73);
      if(g74){
         APace =(APace||1);
      }
      g4 =(PRE_g3);
      _cg4 = ASense;
      g15 =(g4&&(!(_cg4)));
      _cg15 = APace;
      g3 =(g12||(g13&&_cg13)||(g15&&(!(_cg15)))||g2);
      g6 =(PRE_g5);
      _cg6 = PVARPExpired;
      g5 =((g4&&_cg4)||(g6&&(!(_cg6))));
      g8 =(PRE_g7);
      _cg8 = ASense;
      g14 =(g8&&(!(_cg8)));
      _cg14 = APace;
      g7 =((g14&&(!(_cg14)))||(g6&&_cg6));
      g9 =((g8&&_cg8)||(g14&&_cg14)||(g15&&_cg15));
      if(g9){
         AVIStart =(AVIStart||1);
      }
      g10 =(g9||(g13&&(!(_cg13))));
      g17 = g1;
      g23 =(PRE_g22);
      g23b = g23;
      _cg23 = AVIStop;
      g28 =(PRE_g27);
      g28b = g28;
      _cg28 = AVIStop;
      g19 =(PRE_g18);
      _cg19 = URIExpired;
      g26 =(g19&&(!(_cg19)));
      _cg26 = AVIStart;
      g24 =(g23b&&(!(_cg23)));
      _cg24 = AVIExpired;
      g25 =(g24&&_cg24);
      if(g25){
         VPace =(VPace||1);
      }
      g32 =(PRE_g31);
      _cg32 = URIExpired;
      g33 =(g32&&_cg32);
      if(g33){
         VPace =(VPace||1);
      }
      g18 =((g23b&&_cg23)||g17||(g28b&&_cg28)||(g26&&(!(_cg26)))||g25||g33);
      g21 =(PRE_g20);
      g21b = g21;
      _cg21 = AVIStart;
      g20 =((g19&&_cg19)||(g21b&&(!(_cg21))));
      g22 =((g21b&&_cg21)||(g24&&(!(_cg24))));
      g29 =(g28b&&(!(_cg28)));
      _cg29 = AVIExpired;
      g27 =((g26&&_cg26)||(g29&&(!(_cg29))));
      g30 =(g29&&_cg29);
      if(g30){
         VPace =(VPace||1);
      }
      g31 =((g32&&(!(_cg32)))||g30);
      g35 = g1;
      g83 =(PRE_g82);
      _cg83 = VSense;
      g87 =(g83&&(!(_cg83)));
      _cg87 = VPace;
      g89 =(g87&&(!(_cg87)));
      _cg89 = LRIExpired;
      g90 =(g89&&_cg89);
      if(g90){
         VPace =(VPace||1);
      }
      g37 =(PRE_g36);
      _cg37 = VSense;
      g42 =(g37&&(!(_cg37)));
      _cg42 = VPace;
      g40 =(PRE_g39);
      _cg40 = PVARPExpired;
      g36 =((g42&&(!(_cg42)))||g35||(g40&&_cg40));
      g38 =((g42&&_cg42)||(g37&&_cg37));
      if(g38){
         PVARPStart =(PVARPStart||1);
      }
      g41 =(g40&&(!(_cg40)));
      _cg41 = ASense;
      g39 =((g41&&_cg41)||g38||(g41&&_cg41));
      g44 = g1;
      g46 =(PRE_g45);
      _cg46 = VSense;
      g51 =(g46&&(!(_cg46)));
      _cg51 = VPace;
      g49 =(PRE_g48);
      _cg49 = VRPExpired;
      g45 =((g51&&(!(_cg51)))||(g49&&_cg49)||g44);
      g47 =((g51&&_cg51)||(g46&&_cg46));
      if(g47){
         VRPStart =(VRPStart||1);
      }
      g50 =(g49&&(!(_cg49)));
      _cg50 = VSense;
      g48 =((g50&&_cg50)||(g50&&_cg50)||g47);
      g53 = g1;
      g64 =(g62&&(!(_cg62)));
      _cg64 = AEIExpired;
      g55 =(PRE_g54);
      _cg55 = VSense;
      g66 =(g55&&(!(_cg55)));
      _cg66 = VPace;
      g54 =(g53||g63||(g64&&_cg64)||(g66&&(!(_cg66))));
      g57 =(PRE_g56);
      _cg57 = VRPExpired;
      g56 =((g55&&_cg55)||(g57&&(!(_cg57))));
      g59 =(PRE_g58);
      _cg59 = VSense;
      g65 =(g59&&(!(_cg59)));
      _cg65 = VPace;
      g58 =((g65&&(!(_cg65)))||(g57&&_cg57));
      g60 =((g65&&_cg65)||(g59&&_cg59)||(g66&&_cg66));
      if(g60){
         AEIStart =(AEIStart||1);
      }
      g61 =(g60||(g64&&(!(_cg64))));
      g68 = g1;
      g70 =(PRE_g69);
      g70b = g70;
      _cg70 = AEIStart;
      g69 =((g70b&&(!(_cg70)))||(g72b&&_cg72)||g68||g74);
      g71 =((g70b&&_cg70)||(g73&&(!(_cg73))));
      g76 = g1;
      g78 =(PRE_g77);
      _cg78 = VSense;
      g77 =(g76||(g78&&(!(_cg78))));
      g79 =(g78&&_cg78);
      if(g79){
         LRIStart =(LRIStart||1);
      }
      g81 =(PRE_g80);
      _cg81 = VRPExpired;
      g86 =(PRE_g85);
      g86b = g86;
      if(g86b){
         LRIStart =(LRIStart||1);
      }
      g80 =((g81&&(!(_cg81)))||g79||g86b);
      g82 =((g81&&_cg81)||(g89&&(!(_cg89))));
      g84 =(g83&&_cg83);
      if(g84){
         LRIStop =(LRIStop||1);
      }
      g88 =(g87&&_cg87);
      if(g88){
         LRIStop =(LRIStop||1);
      }
      g85 =(g90||g88||g84);
      g92 = g1;
      g96 =(PRE_g95);
      _cg96 = LRIExpired;
      g97 =(g96&&(!(_cg96)));
      _cg97 = LRIStop;
      g94 =(PRE_g93);
      g94b = g94;
      _cg94 = LRIStart;
      g93 =((g97&&_cg97)||(g94b&&(!(_cg94)))||g92||(g96&&_cg96));
      g95 =((g97&&(!(_cg97)))||(g94b&&_cg94));
      g99 = g1;
      g101 =(PRE_g100);
      _cg101 = VSense;
      g110 =(g101&&(!(_cg101)));
      _cg110 = VPace;
      g108 =(PRE_g107);
      _cg108 = URIExpired;
      g100 =(g99||(g110&&(!(_cg110)))||(g108&&_cg108));
      g103 =(PRE_g102);
      _cg103 = VRPExpired;
      g102 =((g103&&(!(_cg103)))||(g101&&_cg101));
      g105 =(PRE_g104);
      _cg105 = VSense;
      g109 =(g105&&(!(_cg105)));
      _cg109 = VPace;
      g104 =((g109&&(!(_cg109)))||(g103&&_cg103));
      g106 =((g110&&_cg110)||(g105&&_cg105)||(g109&&_cg109));
      if(g106){
         URIStart =(URIStart||1);
      }
      g107 =(g106||(g108&&(!(_cg108))));
      g112 = g1;
      g114 =(PRE_g113);
      g114b = g114;
      _cg114 = URIStart;
      g116 =(PRE_g115);
      _cg116 = URIExpired;
      g117 =(g116&&(!(_cg116)));
      _cg117 = URIStop;
      g113 =((g114b&&(!(_cg114)))||(g116&&_cg116)||g112||(g117&&_cg117));
      g115 =((g117&&(!(_cg117)))||(g114b&&_cg114));
      g16_e1 =(!((g4||g6||g8||g11)));
      g34_e2 =(!((g19||g21||g28||g23||g32)));
      g43_e3 =(!((g37||g40)));
      g52_e4 =(!((g46||g49)));
      g67_e5 =(!((g55||g57||g59||g62)));
      g75_e6 =(!((g70||g72)));
      g91_e7 =(!((g78||g81||g83||g86)));
      g98_e8 =(!((g94||g96)));
      g111_e9 =(!((g101||g103||g105||g108)));
      g118_e10 =(!((g114||g116)));
      g119_fix0 =((g16_e1||g16)&&(g34_e2||g34)&&(g43_e3||g43)&&(g52_e4||g52));
      g119_fix1 =(g16||g34||g43||g52);
      g119_e1_fix_fix =(g116||g28||g40||g49||g81||g8||g11||g23||g59||g62||g105||g108||g83);
      g119_e1_fix =(g101||g114||g6||g21||g57||g72||g96||g103||g32||g119_e1_fix_fix);
      g119_e1 =(!((g4||g19||g37||g46||g55||g70||g78||g94||g86||g119_e1_fix)));
      g123_e2 =(!(g122));
   }
   PRE_g3 = g3;
   PRE_g5 = g5;
   PRE_g7 = g7;
   PRE_g10 = g10;
   PRE_g18 = g18;
   PRE_g20 = g20;
   PRE_g22 = g22;
   PRE_g27 = g27;
   PRE_g31 = g31;
   PRE_g36 = g36;
   PRE_g39 = g39;
   PRE_g45 = g45;
   PRE_g48 = g48;
   PRE_g54 = g54;
   PRE_g56 = g56;
   PRE_g58 = g58;
   PRE_g61 = g61;
   PRE_g69 = g69;
   PRE_g71 = g71;
   PRE_g77 = g77;
   PRE_g80 = g80;
   PRE_g82 = g82;
   PRE_g85 = g85;
   PRE_g93 = g93;
   PRE_g95 = g95;
   PRE_g100 = g100;
   PRE_g102 = g102;
   PRE_g104 = g104;
   PRE_g107 = g107;
   PRE_g113 = g113;
   PRE_g115 = g115;
   PRE_g121 = g121;
   _PRE_GO = _GO;
   return;
}
