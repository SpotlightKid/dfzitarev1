/*
 * DF Zita Rev1 audio effect based on DISTRHO Plugin Framework (DPF)
 *
 * SPDX-License-Identifier: MIT
 *
 * Copyright (C) 2020 Christopher Arndt <info@chrisarndt.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef PLUGIN_DFZITAREV1_H
#define PLUGIN_DFZITAREV1_H

#include "DistrhoPlugin.hpp"
#include "DFZitaRev1.hpp"

START_NAMESPACE_DISTRHO

#ifndef MIN
#define MIN(a,b) ( (a) < (b) ? (a) : (b) )
#endif

#ifndef MAX
#define MAX(a,b) ( (a) > (b) ? (a) : (b) )
#endif

#ifndef CLAMP
#define CLAMP(v, min, max) (MIN((max), MAX((min), (v))))
#endif

// -----------------------------------------------------------------------

class PluginDFZitaRev1 : public Plugin {
public:
    PluginDFZitaRev1();

    ~PluginDFZitaRev1();

protected:
    // -------------------------------------------------------------------
    // Information

    const char* getLabel() const noexcept override {
        return "DFZitaRev1";
    }

    const char* getDescription() const override {
        return "A feedback-delay-network reverb";
    }

    const char* getMaker() const noexcept override {
        return "chrisarndt.de";
    }

    const char* getHomePage() const override {
        return DISTRHO_PLUGIN_URI;
    }

    const char* getLicense() const noexcept override {
        return "https://spdx.org/licenses/MIT";
    }

    uint32_t getVersion() const noexcept override {
        return d_version(0, 2, 6);
    }

    // Go to:
    //
    // http://service.steinberg.de/databases/plugin.nsf/plugIn
    //
    // Get a proper plugin UID and fill it in here!
    int64_t getUniqueId() const noexcept override {
        return d_cconst('d', 'f', 'z', 'r');
    }

    // -------------------------------------------------------------------
    // Init

    void initParameter(uint32_t index, Parameter& parameter) override;
    void initProgramName(uint32_t index, String& programName) override;
    void initPortGroup(uint32_t groupId, PortGroup& portGroup) override;

    // -------------------------------------------------------------------
    // Internal data

    float getParameterValue(uint32_t index) const override;
    void setParameterValue(uint32_t index, float value) override;
    void loadProgram(uint32_t index) override;

    // -------------------------------------------------------------------
    // Optional

    // Optional callback to inform the plugin about a sample rate change.
    void sampleRateChanged(double newSampleRate) override;

    // -------------------------------------------------------------------
    // Process

    void activate() override;
    void run(const float**, float** outputs, uint32_t frames) override;

    // -------------------------------------------------------------------

private:
    double          fSampleRate;
    DFZitaRev1*     dsp;

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PluginDFZitaRev1)
};

struct Preset {
    const char* name;
    float params[DFZitaRev1::NumParameters];
};

const Preset factoryPresets[] = {
    //{
    //    "Preset name",
    //    {1.0, ...}      // array of DFZitaRev1::NumParameters float param values
    //},
    {
        "Warm Hall (Insert)",
        {
            35.0,       // In_Delay
            200.0,      // LF_X
            2.2,        // Low_RT60
            2.0,        // Mid_RT60
            4000.0,     // HF_Damping
            500.0,      // Eq1_Freq
            -2.0,       // Eq1_Level
            2500.0,     // Eq2_Freq
            -2.0,       // Eq2_Level
            0.5,        // Dry_Wet_Mix
            2.0         // Level
        }
    },
    {"Warm Hall (Send)", {35.0, 200.0, 2.2, 2.0, 4000.0, 500.0, -2.0, 2500.0, -2.0, -1.0, 20.0}},
    {"Dark Hall (Insert)", {50.0, 200.0, 2.0, 1.8, 5500.0, 120, -3.0, 4500.0, -3.0, 0.5, 2.0}},
    {"Dark Hall (Send)", {50.0, 200.0, 2.0, 1.8, 5500.0, 120, -3.0, 4500.0, -3.0, -1.0, 20.0}},
    {"Medium Church (Insert)", {85.0, 200.0, 2.8, 2.5, 10000.0, 200.0, 0.0, 4000.0, 0.0, 0.3, 2.0}},
    {"Medium Church (Send)", {85.0, 200.0, 2.8, 2.5, 10000.0, 200.0, 0.0, 4000.0, 0.0, -1.0, 20.0}},
};

const uint presetCount = sizeof(factoryPresets) / sizeof(Preset);

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif  // #ifndef PLUGIN_DFZITAREV1_H
