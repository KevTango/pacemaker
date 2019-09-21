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
char AVIEnd;
char VRPStart;
char VRPExpired;
char VRPStop;
char VPace;
char VR;
char ASense;
char VSense;
char AEIEnd;
char AEIStart;
char AVIStart;
char PVARPStart;
char AEIExpired;
char AVIExpired;
char PVARPExpired;
char AEIStop;
char AVIStop;
char PVARPStop;
char APace;
char AR;
char g0;
char g1;
char g2;
char g3;
char PRE_g3;
char g4;
char g5;
char g6;
char PRE_g6;
char g7;
char g8;
char g9;
char g10;
char g11;
char g12;
char g13;
char PRE_g13;
char g14;
char g14b;
char g15;
char PRE_g15;
char g16;
char g16b;
char g17;
char g18;
char g19;
char g20;
char g21;
char PRE_g21;
char g22;
char g23;
char g24;
char g25;
char PRE_g25;
char g26;
char g26b;
char g27;
char PRE_g27;
char g28;
char g29;
char g30;
char g31;
char g32;
char g33;
char PRE_g33;
char g34;
char g35;
char g36;
char PRE_g36;
char g37;
char g38;
char g39;
char g40;
char g41;
char g42;
char PRE_g42;
char g43;
char g44;
char g45;
char PRE_g45;
char g46;
char g47;
char g48;
char g49;
char g50;
char g51;
char g52;
char PRE_g52;
char g53;
char g53b;
char g54;
char PRE_g54;
char g55;
char g55b;
char g56;
char g57;
char g58;
char g59;
char g60;
char PRE_g60;
char g61;
char g62;
char g63;
char PRE_g63;
char g64;
char g65;
char g66;
char g67;
char g68;
char g69;
char PRE_g69;
char g70;
char g71;
char g72;
char PRE_g72;
char g73;
char g74;
char g75;
char g76;
char g77;
char g78;
char g79;
char PRE_g79;
char g80;
char g81;
char g82;
char _GO;
char _cg9;
char _cg10;
char _cg4;
char _cg7;
char _cg16;
char _cg14;
char _cg17;
char _cg26;
char _cg29;
char _cg22;
char _cg24;
char _cg38;
char _cg34;
char _cg48;
char _cg49;
char _cg43;
char _cg46;
char _cg55;
char _cg53;
char _cg56;
char _cg65;
char _cg61;
char _cg74;
char _cg70;
char g11_e1;
char g19_e2;
char g31_e3;
char g40_e4;
char g50_e5;
char g58_e6;
char g67_e7;
char g76_e8;
char g77_fix0;
char g77_e1_fix;
char g77_e1;
char g81_e2;
int _PRE_GO;
void reset(){
   _GO = 1;
   _PRE_GO = 0;
   PRE_g3 = 0;
   PRE_g6 = 0;
   PRE_g13 = 0;
   PRE_g15 = 0;
   PRE_g21 = 0;
   PRE_g25 = 0;
   PRE_g27 = 0;
   PRE_g33 = 0;
   PRE_g36 = 0;
   PRE_g42 = 0;
   PRE_g45 = 0;
   PRE_g52 = 0;
   PRE_g54 = 0;
   PRE_g60 = 0;
   PRE_g63 = 0;
   PRE_g69 = 0;
   PRE_g72 = 0;
   PRE_g79 = 0;
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
      g7 =(PRE_g6);
      _cg7 = VSense;
      g9 =(g7&&(!(_cg7)));
      _cg9 = AVIExpired;
      g80 =(PRE_g79);
      g78 = g0;
      g79 =(g80||g78);
      if(g79){
         AEIStart = 0;
         AVIStart = 0;
         PVARPStart = 0;
         VRPStart = 0;
         AEIStop = 0;
         AVIStop = 0;
         PVARPStop = 0;
         VRPStop = 0;
         APace = 0;
         VPace = 0;
         AR = 0;
         VR = 0;
      }
      g46 =(PRE_g45);
      _cg46 = ASense;
      g47 =(g46&&_cg46);
      if(g47){
         AEIStop =(AEIStop||1);
      }
      g55 =(PRE_g54);
      g55b = g55;
      _cg55 = AEIStop;
      g56 =(g55b&&(!(_cg55)));
      _cg56 = AEIExpired;
      g57 =(g56&&_cg56);
      if(g57){
         APace =(APace||1);
      }
      g4 =(PRE_g3);
      _cg4 = ASense;
      g10 =(g4&&(!(_cg4)));
      _cg10 = APace;
      g8 =(g7&&_cg7);
      if(g8){
         AVIStop =(AVIStop||1);
      }
      g3 =(g2||(g9&&_cg9)||(g10&&(!(_cg10)))||g8);
      g5 =((g4&&_cg4)||(g10&&_cg10));
      if(g5){
         AVIStart =(AVIStart||1);
      }
      g6 =(g5||(g9&&(!(_cg9))));
      g12 = g1;
      g16 =(PRE_g15);
      g16b = g16;
      _cg16 = AVIStop;
      g17 =(g16b&&(!(_cg16)));
      _cg17 = AVIExpired;
      g18 =(g17&&_cg17);
      if(g18){
         VPace =(VPace||1);
      }
      g14 =(PRE_g13);
      g14b = g14;
      _cg14 = AVIStart;
      g13 =(g12||g18||(g16b&&_cg16)||(g14b&&(!(_cg14))));
      g15 =((g14b&&_cg14)||(g17&&(!(_cg17))));
      g20 = g1;
      g26 =(PRE_g25);
      g26b = g26;
      _cg26 =(!(AR));
      g22 =(PRE_g21);
      _cg22 = ASense;
      g29 =(g22&&(!(_cg22)));
      _cg29 = APace;
      g21 =((g26b&&_cg26)||(g29&&(!(_cg29)))||g20);
      g23 =(g22&&_cg22);
      if(g23){
         PVARPStart =(PVARPStart||1);
      }
      g30 =(g29&&_cg29);
      if(g30){
         PVARPStart =(PVARPStart||1);
      }
      g28 =(PRE_g27);
      g24 =(g30||g23||g28);
      _cg24 = AR;
      g25 =((g26b&&(!(_cg26)))||(g24&&_cg24));
      g27 =(g24&&(!(_cg24)));
      g32 = g1;
      g34 =(PRE_g33);
      _cg34 = ASense;
      g38 =(g34&&(!(_cg34)));
      _cg38 = APace;
      g33 =((g38&&(!(_cg38)))||g32);
      g35 =(g34&&_cg34);
      if(g35){
         VRPStart =(VRPStart||1);
      }
      g37 =(PRE_g36);
      g39 =(g38&&_cg38);
      if(g39){
         VRPStart =(VRPStart||1);
      }
      g36 =(g35||g37||g39);
      g41 = g1;
      g43 =(PRE_g42);
      _cg43 = VSense;
      g49 =(g43&&(!(_cg43)));
      _cg49 = VPace;
      g48 =(g46&&(!(_cg46)));
      _cg48 = AEIExpired;
      g42 =((g49&&(!(_cg49)))||(g48&&_cg48)||g41||g47);
      g44 =((g43&&_cg43)||(g49&&_cg49));
      if(g44){
         AEIStart =(AEIStart||1);
      }
      g45 =((g48&&(!(_cg48)))||g44);
      g51 = g1;
      g61 =(PRE_g60);
      _cg61 = VSense;
      g62 =(g61&&_cg61);
      if(g62){
         AEIStart =(AEIStart||1);
      }
      g65 =(g61&&(!(_cg61)));
      _cg65 = VPace;
      g66 =(g65&&_cg65);
      if(g66){
         AEIStart =(AEIStart||1);
      }
      g70 =(PRE_g69);
      _cg70 = VSense;
      g71 =(g70&&_cg70);
      if(g71){
         AEIStart =(AEIStart||1);
      }
      g74 =(g70&&(!(_cg70)));
      _cg74 = VPace;
      g75 =(g74&&_cg74);
      if(g75){
         AEIStart =(AEIStart||1);
      }
      g53 =(PRE_g52);
      g53b = g53;
      _cg53 = AEIStart;
      g52 =(g57||(g53b&&(!(_cg53)))||g51||(g55b&&_cg55));
      g54 =((g53b&&_cg53)||(g56&&(!(_cg56))));
      g59 = g1;
      g60 =((g65&&(!(_cg65)))||g59);
      g64 =(PRE_g63);
      g63 =(g64||g62||g66);
      g68 = g1;
      g69 =(g68||(g74&&(!(_cg74))));
      g73 =(PRE_g72);
      g72 =(g73||g75||g71);
      g11_e1 =(!((g4||g7)));
      g19_e2 =(!((g14||g16)));
      g31_e3 =(!((g22||g26||g28)));
      g40_e4 =(!((g34||g37)));
      g50_e5 =(!((g43||g46)));
      g58_e6 =(!((g53||g55)));
      g67_e7 =(!((g61||g64)));
      g76_e8 =(!((g70||g73)));
      g77_fix0 =((g11_e1||g11)&&(g19_e2||g19)&&(g31_e3||g31)&&(g40_e4||g40));
      g77_e1_fix =(g16||g55||g7||g37||g46||g64||g73||g26);
      g77_e1 =(!((g4||g14||g22||g34||g43||g53||g61||g70||g28||g77_e1_fix)));
      g81_e2 =(!(g80));
   }
   PRE_g3 = g3;
   PRE_g6 = g6;
   PRE_g13 = g13;
   PRE_g15 = g15;
   PRE_g21 = g21;
   PRE_g25 = g25;
   PRE_g27 = g27;
   PRE_g33 = g33;
   PRE_g36 = g36;
   PRE_g42 = g42;
   PRE_g45 = g45;
   PRE_g52 = g52;
   PRE_g54 = g54;
   PRE_g60 = g60;
   PRE_g63 = g63;
   PRE_g69 = g69;
   PRE_g72 = g72;
   PRE_g79 = g79;
   _PRE_GO = _GO;
   return;
}
