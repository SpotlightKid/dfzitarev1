
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: dfzitarev1.dsp
// Name: DFZitaRev1
// Author: Julius O. Smith III, Christopher Arndt
// Copyright: Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>
// License: STK-4.3 license
// Version: 0.1.0
//------------------------------------------------------------------------------






#pragma once
#ifndef DFZitaRev1_Faust_pp_Gen_HPP_
#define DFZitaRev1_Faust_pp_Gen_HPP_

#include <memory>

class DFZitaRev1 {
public:
    DFZitaRev1();
    ~DFZitaRev1();

    void init(float sample_rate);
    void clear() noexcept;

    void process(
        const float *in0,const float *in1,
        float *out0,float *out1,
        unsigned count) noexcept;

    enum { NumInputs = 2 };
    enum { NumOutputs = 2 };
    enum { NumActives = 11 };
    enum { NumPassives = 0 };
    enum { NumParameters = 11 };

    enum Parameter {
        p_In_Delay,
        p_LF_X,
        p_Low_RT60,
        p_Mid_RT60,
        p_HF_Damping,
        p_Eq1_Freq,
        p_Eq1_Level,
        p_Eq2_Freq,
        p_Eq2_Level,
        p_Dry_Wet_Mix,
        p_Level,
        
    };

    struct ParameterRange {
        float init;
        float min;
        float max;
    };

    static const char *parameter_label(unsigned index) noexcept;
    static const char *parameter_short_label(unsigned index) noexcept;
    static const char *parameter_symbol(unsigned index) noexcept;
    static const char *parameter_unit(unsigned index) noexcept;
    static const ParameterRange *parameter_range(unsigned index) noexcept;
    static bool parameter_is_trigger(unsigned index) noexcept;
    static bool parameter_is_boolean(unsigned index) noexcept;
    static bool parameter_is_integer(unsigned index) noexcept;
    static bool parameter_is_logarithmic(unsigned index) noexcept;

    float get_parameter(unsigned index) const noexcept;
    void set_parameter(unsigned index, float value) noexcept;

    
    float get_In_Delay() const noexcept;
    
    float get_LF_X() const noexcept;
    
    float get_Low_RT60() const noexcept;
    
    float get_Mid_RT60() const noexcept;
    
    float get_HF_Damping() const noexcept;
    
    float get_Eq1_Freq() const noexcept;
    
    float get_Eq1_Level() const noexcept;
    
    float get_Eq2_Freq() const noexcept;
    
    float get_Eq2_Level() const noexcept;
    
    float get_Dry_Wet_Mix() const noexcept;
    
    float get_Level() const noexcept;
    
    
    void set_In_Delay(float value) noexcept;
    
    void set_LF_X(float value) noexcept;
    
    void set_Low_RT60(float value) noexcept;
    
    void set_Mid_RT60(float value) noexcept;
    
    void set_HF_Damping(float value) noexcept;
    
    void set_Eq1_Freq(float value) noexcept;
    
    void set_Eq1_Level(float value) noexcept;
    
    void set_Eq2_Freq(float value) noexcept;
    
    void set_Eq2_Level(float value) noexcept;
    
    void set_Dry_Wet_Mix(float value) noexcept;
    
    void set_Level(float value) noexcept;
    

public:
    class BasicDsp;

private:
    std::unique_ptr<BasicDsp> fDsp;



};




#endif // DFZitaRev1_Faust_pp_Gen_HPP_