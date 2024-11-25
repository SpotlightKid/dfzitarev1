//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/SpotlightKid/faustdoctor).
//
// Source: dfzitarev1.dsp
// Name: DFZitaRev1
// Author: Julius O. Smith III, Christopher Arndt
// Copyright: Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>
// License: STK-4.3 license
// Version: 0.1.0
// FAUST version: 2.76.0
// FAUST compilation options: -a /home/chris/tmp/tmp3y6j37zh.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
//------------------------------------------------------------------------------


#pragma once
#ifndef DFZitaRev1_Faust_pp_Gen_HPP_
#define DFZitaRev1_Faust_pp_Gen_HPP_

#include <memory>
#include <string>

class DFZitaRev1 {
public:
    DFZitaRev1();
    ~DFZitaRev1();

    void init(float sample_rate);
    void clear() noexcept;

    void process(
        const float *in0, const float *in1, 
        float *out0, float *out1, 
        unsigned count) noexcept;

    enum { NumInputs = 2 };
    enum { NumOutputs = 2 };
    enum { NumActives = 11 };
    enum { NumPassives = 0 };
    enum { NumParameters = 11 };

    enum Parameter {
        p_in_delay,
        p_lf_x,
        p_low_rt60,
        p_mid_rt60,
        p_hf_damping,
        p_eq1_freq,
        p_eq1_level,
        p_eq2_freq,
        p_eq2_level,
        p_dry_wet_mix,
        p_level,
    };

    struct ParameterRange {
        float init;
        float min;
        float max;
    };

    struct ParameterScalePoint {
        std::string label;
        float value;
    };

    int parameter_group(unsigned index) noexcept;
    int parameter_order(unsigned index) noexcept;
    static const char *parameter_group_label(unsigned group_id) noexcept;
    static const char *parameter_group_symbol(unsigned group_id) noexcept;
    static const char *parameter_label(unsigned index) noexcept;
    static const char *parameter_short_label(unsigned index) noexcept;
    static const char *parameter_description(unsigned index) noexcept;
    static const char *parameter_style(unsigned index) noexcept;
    static const char *parameter_symbol(unsigned index) noexcept;
    static const char *parameter_unit(unsigned index) noexcept;
    static const ParameterRange *parameter_range(unsigned index) noexcept;
    unsigned parameter_scale_point_count(unsigned index) noexcept;
    static const ParameterScalePoint *parameter_scale_point(unsigned index, unsigned point) noexcept;
    static bool parameter_is_trigger(unsigned index) noexcept;
    static bool parameter_is_boolean(unsigned index) noexcept;
    static bool parameter_is_enum(unsigned index) noexcept;
    static bool parameter_is_integer(unsigned index) noexcept;
    static bool parameter_is_logarithmic(unsigned index) noexcept;

    float get_parameter(unsigned index) const noexcept;
    void set_parameter(unsigned index, float value) noexcept;

    float get_in_delay() const noexcept;
    float get_lf_x() const noexcept;
    float get_low_rt60() const noexcept;
    float get_mid_rt60() const noexcept;
    float get_hf_damping() const noexcept;
    float get_eq1_freq() const noexcept;
    float get_eq1_level() const noexcept;
    float get_eq2_freq() const noexcept;
    float get_eq2_level() const noexcept;
    float get_dry_wet_mix() const noexcept;
    float get_level() const noexcept;
    void set_in_delay(float value) noexcept;
    void set_lf_x(float value) noexcept;
    void set_low_rt60(float value) noexcept;
    void set_mid_rt60(float value) noexcept;
    void set_hf_damping(float value) noexcept;
    void set_eq1_freq(float value) noexcept;
    void set_eq1_level(float value) noexcept;
    void set_eq2_freq(float value) noexcept;
    void set_eq2_level(float value) noexcept;
    void set_dry_wet_mix(float value) noexcept;
    void set_level(float value) noexcept;

public:
    class BasicDsp;

private:
    std::unique_ptr<BasicDsp> fDsp;

};


#endif // DFZitaRev1_Faust_pp_Gen_HPP_