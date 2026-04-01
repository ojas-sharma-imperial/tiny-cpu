// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

extern const VlUnpacked<CData/*0:0*/, 32> Vdut__ConstPool__TABLE_h35c5b8e8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vdut__ConstPool__TABLE_h62a9b285_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vdut__ConstPool__TABLE_h484d16ef_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vdut__ConstPool__TABLE_he60f8426_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vdut__ConstPool__TABLE_hdb655e07_0;

VL_ATTR_COLD void Vdut___024root___settle__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___settle__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    // Body
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__aluen 
        = (((~ ((IData)(vlSelf->testing__DOT__ui_in) 
                >> 7U)) | (IData)((0x80U == (0xc0U 
                                             & (IData)(vlSelf->testing__DOT__ui_in))))) 
           & ((7U != (7U & (IData)(vlSelf->testing__DOT__ui_in))) 
              | (IData)((7U == (0x87U & (IData)(vlSelf->testing__DOT__ui_in))))));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__jumpen = 0U;
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__shiften = 0U;
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memldr = 0U;
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__op2sel = 0U;
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memstr = 0U;
    if ((1U & (~ ((~ ((IData)(vlSelf->testing__DOT__ui_in) 
                      >> 7U)) | (IData)((0x80U == (0xc0U 
                                                   & (IData)(vlSelf->testing__DOT__ui_in)))))))) {
        if ((IData)((0xc1U == (0xc1U & (IData)(vlSelf->testing__DOT__ui_in))))) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__jumpen = 1U;
        }
        if ((IData)((0xc0U == (0xc1U & (IData)(vlSelf->testing__DOT__ui_in))))) {
            if ((1U & (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                          >> 1U)))) {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memldr = 1U;
            }
            if ((2U & (IData)(vlSelf->testing__DOT__ui_in))) {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memstr = 1U;
            }
        }
    }
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__extenden 
        = (1U & (((~ ((IData)(vlSelf->testing__DOT__ui_in) 
                      >> 7U)) | (IData)((0x80U == (0xc0U 
                                                   & (IData)(vlSelf->testing__DOT__ui_in))))) 
                 & (~ ((7U != (7U & (IData)(vlSelf->testing__DOT__ui_in))) 
                       | (IData)((7U == (0x87U & (IData)(vlSelf->testing__DOT__ui_in))))))));
    __Vtableidx2 = ((0x1cU & ((IData)(vlSelf->testing__DOT__ui_in) 
                              << 2U)) | (3U & ((IData)(vlSelf->testing__DOT__ui_in) 
                                               >> 6U)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jumpen 
        = Vdut__ConstPool__TABLE_h35c5b8e8_0[__Vtableidx2];
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagzwen 
        = Vdut__ConstPool__TABLE_h62a9b285_0[__Vtableidx2];
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagcwen 
        = Vdut__ConstPool__TABLE_h484d16ef_0[__Vtableidx2];
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__ad1toregfile 
        = (1U & ((IData)(vlSelf->testing__DOT__ui_in) 
                 >> 5U));
    if ((1U & ((~ ((IData)(vlSelf->testing__DOT__ui_in) 
                   >> 7U)) | (IData)((0x80U == (0xc0U 
                                                & (IData)(vlSelf->testing__DOT__ui_in))))))) {
        if (((7U != (7U & (IData)(vlSelf->testing__DOT__ui_in))) 
             | (IData)((7U == (0x87U & (IData)(vlSelf->testing__DOT__ui_in)))))) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__shiften 
                = (7U == (7U & (IData)(vlSelf->testing__DOT__ui_in)));
            if ((1U & (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                          >> 7U)))) {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__op2sel = 1U;
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__ad1toregfile = 0U;
            } else {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__op2sel = 0U;
            }
            if ((7U == (7U & (IData)(vlSelf->testing__DOT__ui_in)))) {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__ad1toregfile = 0U;
            }
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__wen1toregfile 
                = (6U != (7U & (IData)(vlSelf->testing__DOT__ui_in)));
        } else {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__wen1toregfile = 0U;
        }
    } else {
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__wen1toregfile = 0U;
        if ((IData)((0xc0U == (0xc1U & (IData)(vlSelf->testing__DOT__ui_in))))) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__op2sel 
                = (1U & (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                            >> 2U)));
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__wen1toregfile 
                = (1U & (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                            >> 1U)));
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagc) 
                     << 3U) | (7U & (IData)(vlSelf->testing__DOT__ui_in)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__cintoaddsub 
        = Vdut__ConstPool__TABLE_he60f8426_0[__Vtableidx1];
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__inverttoaddsub 
        = Vdut__ConstPool__TABLE_hdb655e07_0[__Vtableidx1];
    vlSelf->testing__DOT__uo_out = ((0xc0U & (IData)(vlSelf->testing__DOT__uo_out)) 
                                    | (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc));
    if ((0x10U & (IData)(vlSelf->testing__DOT__ui_in))) {
        if ((0x10U & (IData)(vlSelf->testing__DOT__ui_in))) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu 
                = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_registers__DOT__regB;
        }
    } else {
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu 
            = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_registers__DOT__regA;
    }
    vlSelf->testing__DOT__uo_out = ((0x7fU & (IData)(vlSelf->testing__DOT__uo_out)) 
                                    | ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memstr) 
                                       << 7U));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jsr = 0U;
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_taken 
        = ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jumpen) 
           & ((4U & (IData)(vlSelf->testing__DOT__ui_in))
               ? (((IData)(vlSelf->testing__DOT__ui_in) 
                   >> 1U) | ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                              ? (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagc))
                              : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagc)))
               : ((2U & (IData)(vlSelf->testing__DOT__ui_in))
                   ? ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                       ? (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagz))
                       : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagz))
                   : (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                         >> 3U)))));
    if (vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__ad1toregfile) {
        if (vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__ad1toregfile) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu 
                = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_registers__DOT__regB;
        }
    } else {
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu 
            = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_registers__DOT__regA;
    }
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_1__DOT__temp = 0U;
    if ((0x20U & (IData)(vlSelf->testing__DOT__ui_in))) {
        if ((0x10U & (IData)(vlSelf->testing__DOT__ui_in))) {
            if ((8U & (IData)(vlSelf->testing__DOT__ui_in))) {
                if (vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagc) {
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_1__DOT__temp 
                        = (0xfU & (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu)));
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_1__DOT__temp 
                        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_1__DOT__temp) 
                                   >> 1U));
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data 
                        = (0xfU & (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_1__DOT__temp)));
                } else {
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data 
                        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu) 
                                   >> 1U));
                }
            } else {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data 
                    = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu) 
                               >> 1U));
            }
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset = 0x3dU;
        } else {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data 
                = (0xfU & ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                            ? ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu) 
                               >> 1U) : ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu) 
                                         << 1U)));
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset = 0x3eU;
        }
    } else {
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data 
            = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu;
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset 
            = ((0x10U & (IData)(vlSelf->testing__DOT__ui_in))
                ? 3U : 2U);
    }
    vlSelf->uio_oe = (0xf0U | (0xfU & (- (IData)((1U 
                                                  & ((IData)(vlSelf->testing__DOT__uo_out) 
                                                     >> 7U))))));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__destination = 0U;
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__extended_reg 
        = (((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__addr_ext__DOT__regX) 
            << 4U) | (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu));
    if (vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jumpen) {
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jsr = 0U;
        if ((4U & (IData)(vlSelf->testing__DOT__ui_in))) {
            if ((2U & (IData)(vlSelf->testing__DOT__ui_in))) {
                if ((1U & (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                              >> 3U)))) {
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jsr = 1U;
                }
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__destination 
                    = (0x3fU & ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                                 ? (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pcx)
                                 : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__extended_reg)));
            } else {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__destination 
                    = (0x3fU & ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                                 ? ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc) 
                                    + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset))
                                 : ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc) 
                                    + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset))));
            }
        } else if ((2U & (IData)(vlSelf->testing__DOT__ui_in))) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__destination 
                = (0x3fU & ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                             ? ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc) 
                                + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset))
                             : ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc) 
                                + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset))));
        } else if ((1U & (~ ((IData)(vlSelf->testing__DOT__ui_in) 
                             >> 3U)))) {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__destination 
                = (0x3fU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc) 
                            + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset)));
        }
    }
    vlSelf->testing__DOT__uio_out = ((0xf0U & (IData)(vlSelf->testing__DOT__uio_out)) 
                                     | (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_2__DOT__temp = 0U;
    if ((0x40U & (IData)(vlSelf->testing__DOT__ui_in))) {
        if ((0x10U & (IData)(vlSelf->testing__DOT__ui_in))) {
            if ((8U & (IData)(vlSelf->testing__DOT__ui_in))) {
                if (vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagc) {
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_2__DOT__temp 
                        = (0xfU & (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data)));
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_2__DOT__temp 
                        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_2__DOT__temp) 
                                   >> 2U));
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout 
                        = (0xfU & (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_2__DOT__temp)));
                } else {
                    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout 
                        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data) 
                                   >> 2U));
                }
            } else {
                vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout 
                    = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data) 
                               >> 2U));
            }
        } else {
            vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout 
                = (0xfU & ((8U & (IData)(vlSelf->testing__DOT__ui_in))
                            ? ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data) 
                               >> 2U) : ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data) 
                                         << 2U)));
        }
    } else {
        vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout 
            = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data;
    }
    if ((4U & (IData)(vlSelf->testing__DOT__ui_in))) {
        if ((4U & (IData)(vlSelf->testing__DOT__ui_in))) {
            vlSelf->testing__DOT__main_cpu__DOT__memaddr 
                = ((0x10U & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__addr_ext__DOT__regX) 
                             << 4U)) | (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu));
        }
    } else {
        vlSelf->testing__DOT__main_cpu__DOT__memaddr 
            = (3U & ((IData)(vlSelf->testing__DOT__ui_in) 
                     >> 3U));
    }
    vlSelf->testing__DOT__main_cpu__DOT__memaddr = 
        ((0x10U & ((IData)(vlSelf->testing__DOT__uo_out) 
                   >> 2U)) | (0xfU & ((IData)(vlSelf->testing__DOT__uio_out) 
                                      >> 4U)));
    vlSelf->testing__DOT__ram_addr = ((0x10U & ((IData)(vlSelf->testing__DOT__uo_out) 
                                                >> 2U)) 
                                      | (0xfU & ((IData)(vlSelf->testing__DOT__uio_out) 
                                                 >> 4U)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__secondinput 
        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__op2sel)
                    ? ((IData)(vlSelf->testing__DOT__ui_in) 
                       >> 3U) : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__aludout 
        = (0xfU & ((4U & (IData)(vlSelf->testing__DOT__ui_in))
                    ? ((2U & (IData)(vlSelf->testing__DOT__ui_in))
                        ? ((1U & (IData)(vlSelf->testing__DOT__ui_in))
                            ? (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout)
                            : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout))
                        : ((1U & (IData)(vlSelf->testing__DOT__ui_in))
                            ? (~ ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu) 
                                  & (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__secondinput)))
                            : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout)))
                    : ((2U & (IData)(vlSelf->testing__DOT__ui_in))
                        ? (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout)
                        : ((1U & (IData)(vlSelf->testing__DOT__ui_in))
                            ? (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout)
                            : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__secondinput)))));
    vlSelf->testing__DOT__uio_in = ((0xf0U & (IData)(vlSelf->testing__DOT__uio_in)) 
                                    | vlSelf->testing__DOT__main_memory__DOT__ram_mem
                                    [vlSelf->testing__DOT__ram_addr]);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__secondinput 
        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__inverttoaddsub)
                    ? (~ (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__secondinput))
                    : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__secondinput)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__adderout 
        = (0x1fU & (((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu) 
                     + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__secondinput)) 
                    + (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__cintoaddsub)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout 
        = (0xfU & (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__adderout));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubcout 
        = (1U & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__adderout) 
                 >> 4U));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__general_data 
        = (0xfU & ((IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memldr)
                    ? (IData)(vlSelf->testing__DOT__uio_in)
                    : (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__aludout)));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__flagztocp 
        = (0U == (IData)(vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__general_data));
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__regfiledin 
        = vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__general_data;
}

VL_ATTR_COLD void Vdut___024root___initial__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb2bfc2f2__0;
    // Body
    VL_WRITEF("[mem_interface] Loading ROM from: testprogram.mem\n");
    __Vtemp_hb2bfc2f2__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2bfc2f2__0[1U] = 0x6772616dU;
    __Vtemp_hb2bfc2f2__0[2U] = 0x7470726fU;
    __Vtemp_hb2bfc2f2__0[3U] = 0x746573U;
    VL_READMEM_N(true, 8, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hb2bfc2f2__0)
                 ,  &(vlSelf->testing__DOT__main_memory__DOT__rom_mem)
                 , 0, ~0ULL);
    VL_WRITEF("[mem_interface] ROM load complete.\n");
}

VL_ATTR_COLD void Vdut___024root___settle__TOP__1(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->testing__DOT__ui_in = vlSelf->testing__DOT__main_memory__DOT__rom_mem
        [(0x3fU & (IData)(vlSelf->testing__DOT__uo_out))];
}

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    // Body
    Vdut___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    // Body
    Vdut___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vdut___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vdut___024root___final(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___final\n"); );
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->uio_oe = VL_RAND_RESET_I(8);
    vlSelf->testing__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->testing__DOT__uo_out = VL_RAND_RESET_I(8);
    vlSelf->testing__DOT__uio_in = VL_RAND_RESET_I(8);
    vlSelf->testing__DOT__uio_out = VL_RAND_RESET_I(8);
    vlSelf->testing__DOT__ram_addr = VL_RAND_RESET_I(5);
    vlSelf->testing__DOT__main_cpu__DOT__memaddr = VL_RAND_RESET_I(5);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__flagztocp = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__ad1toregfile = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__wen1toregfile = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din1toalu = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__din2toalu = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__regfiledin = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__general_data = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__aludout = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__aluen = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__shiften = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__extenden = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__op2sel = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__jumpen = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memldr = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__memstr = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_registers__DOT__regA = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_registers__DOT__regB = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__inverttoaddsub = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__cintoaddsub = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__secondinput = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubcout = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__shiftdout = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__secondinput = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__main_adder__DOT__adderout = VL_RAND_RESET_I(5);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift1toshift2data = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_1__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__mainShifter__DOT__shift_2__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__addr_ext__DOT__regX = VL_RAND_RESET_I(2);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__addr_ext__DOT__extactive = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagc = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagz = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pc = VL_RAND_RESET_I(6);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__pcx = VL_RAND_RESET_I(6);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_taken = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__destination = VL_RAND_RESET_I(6);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jsr = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jumpen = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagcwen = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__flagzwen = VL_RAND_RESET_I(1);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__offset = VL_RAND_RESET_I(6);
    vlSelf->testing__DOT__main_cpu__DOT__main_cpu__DOT__main_controlpath__DOT__jump_conditions__DOT__extended_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->testing__DOT__main_memory__DOT__ram_mem[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->testing__DOT__main_memory__DOT__rom_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->testing__DOT__main_memory__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__testing__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__testing__DOT__main_cpu__DOT__main_cpu__DOT__main_datapath__DOT__main_alu__DOT__addsubdout = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
