
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







#include "DFZitaRev1.hpp"



#include <utility>
#include <cmath>

class DFZitaRev1::BasicDsp {
public:
    virtual ~BasicDsp() {}
};

//------------------------------------------------------------------------------
// Begin the Faust code section

namespace {

template <class T> inline T min(T a, T b) { return (a < b) ? a : b; }
template <class T> inline T max(T a, T b) { return (a > b) ? a : b; }

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

typedef DFZitaRev1::BasicDsp dsp;

} // namespace

#define FAUSTPP_VIRTUAL // do not declare any methods virtual
#define FAUSTPP_PRIVATE public // do not hide any members
#define FAUSTPP_PROTECTED public // do not hide any members

// define the DSP in the anonymous namespace
#define FAUSTPP_BEGIN_NAMESPACE namespace {
#define FAUSTPP_END_NAMESPACE }


#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTPP_PRIVATE
#   define FAUSTPP_PRIVATE private
#endif
#ifndef FAUSTPP_PROTECTED
#   define FAUSTPP_PROTECTED protected
#endif
#ifndef FAUSTPP_VIRTUAL
#   define FAUSTPP_VIRTUAL virtual
#endif

#ifndef FAUSTPP_BEGIN_NAMESPACE
#   define FAUSTPP_BEGIN_NAMESPACE
#endif
#ifndef FAUSTPP_END_NAMESPACE
#   define FAUSTPP_END_NAMESPACE
#endif

FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTPP_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	FAUSTFLOAT fVslider0;
	int fSampleRate;
	float fConst2;
	FAUSTFLOAT fVslider1;
	float fConst3;
	FAUSTFLOAT fVslider2;
	float fConst4;
	float fRec11[2];
	FAUSTFLOAT fVslider3;
	float fRec10[2];
	int IOTA0;
	float fVec0[16384];
	int iConst6;
	float fVec1[16384];
	FAUSTFLOAT fVslider4;
	float fConst7;
	float fVec2[4096];
	int iConst8;
	float fRec8[2];
	float fConst10;
	float fRec15[2];
	float fRec14[2];
	float fVec3[16384];
	int iConst12;
	float fVec4[2048];
	int iConst13;
	float fRec12[2];
	float fConst15;
	float fRec19[2];
	float fRec18[2];
	float fVec5[16384];
	int iConst17;
	float fVec6[4096];
	int iConst18;
	float fRec16[2];
	float fConst20;
	float fRec23[2];
	float fRec22[2];
	float fVec7[16384];
	int iConst22;
	float fVec8[2048];
	int iConst23;
	float fRec20[2];
	float fConst25;
	float fRec27[2];
	float fRec26[2];
	float fVec9[32768];
	int iConst27;
	float fVec10[16384];
	float fVec11[4096];
	int iConst28;
	float fRec24[2];
	float fConst30;
	float fRec31[2];
	float fRec30[2];
	float fVec12[16384];
	int iConst32;
	float fVec13[4096];
	int iConst33;
	float fRec28[2];
	float fConst35;
	float fRec35[2];
	float fRec34[2];
	float fVec14[32768];
	int iConst37;
	float fVec15[4096];
	int iConst38;
	float fRec32[2];
	float fConst40;
	float fRec39[2];
	float fRec38[2];
	float fVec16[32768];
	int iConst42;
	float fVec17[2048];
	int iConst43;
	float fRec36[2];
	float fRec0[3];
	float fRec1[3];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fRec40[3];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fRec41[3];
	float fConst44;
	float fConst45;
	FAUSTFLOAT fVslider9;
	float fRec42[2];
	FAUSTFLOAT fVslider10;
	float fRec43[2];
	float fRec44[3];
	float fRec45[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("author", "Julius O. Smith III, Christopher Arndt");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.9");
		m->declare("compile_options", "-a /home/chris/tmp/tmp6vv1j_29.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "0.1");
		m->declare("demos.lib/zita_rev1:author", "Julius O. Smith III");
		m->declare("demos.lib/zita_rev1:licence", "MIT");
		m->declare("description", "A feedback-delay-network reverb");
		m->declare("filename", "dfzitarev1.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/peak_eq_rm:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq_rm:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq_rm:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "0.3");
		m->declare("license", "STK-4.3 license");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.5");
		m->declare("name", "DFZitaRev1");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "0.2");
		m->declare("routes.lib/hadamard:author", "Remy Muller, revised by Romain Michon");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "0.2");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.3");
		m->declare("version", "0.1.0");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 2;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		float fConst1 = std::floor(0.174713f * fConst0 + 0.5f);
		fConst2 = (0.0f - 6.9077554f * fConst1) / fConst0;
		fConst3 = 6.2831855f / fConst0;
		fConst4 = 3.1415927f / fConst0;
		float fConst5 = std::floor(0.022904f * fConst0 + 0.5f);
		iConst6 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst1 - fConst5)));
		fConst7 = 0.001f * fConst0;
		iConst8 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst5 + -1.0f)));
		float fConst9 = std::floor(0.153129f * fConst0 + 0.5f);
		fConst10 = (0.0f - 6.9077554f * fConst9) / fConst0;
		float fConst11 = std::floor(0.020346f * fConst0 + 0.5f);
		iConst12 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst9 - fConst11)));
		iConst13 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst11 + -1.0f)));
		float fConst14 = std::floor(0.127837f * fConst0 + 0.5f);
		fConst15 = (0.0f - 6.9077554f * fConst14) / fConst0;
		float fConst16 = std::floor(0.031604f * fConst0 + 0.5f);
		iConst17 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst14 - fConst16)));
		iConst18 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst16 + -1.0f)));
		float fConst19 = std::floor(0.125f * fConst0 + 0.5f);
		fConst20 = (0.0f - 6.9077554f * fConst19) / fConst0;
		float fConst21 = std::floor(0.013458f * fConst0 + 0.5f);
		iConst22 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst19 - fConst21)));
		iConst23 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst21 + -1.0f)));
		float fConst24 = std::floor(0.210389f * fConst0 + 0.5f);
		fConst25 = (0.0f - 6.9077554f * fConst24) / fConst0;
		float fConst26 = std::floor(0.024421f * fConst0 + 0.5f);
		iConst27 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst24 - fConst26)));
		iConst28 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst26 + -1.0f)));
		float fConst29 = std::floor(0.192303f * fConst0 + 0.5f);
		fConst30 = (0.0f - 6.9077554f * fConst29) / fConst0;
		float fConst31 = std::floor(0.029291f * fConst0 + 0.5f);
		iConst32 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst29 - fConst31)));
		iConst33 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst31 + -1.0f)));
		float fConst34 = std::floor(0.256891f * fConst0 + 0.5f);
		fConst35 = (0.0f - 6.9077554f * fConst34) / fConst0;
		float fConst36 = std::floor(0.027333f * fConst0 + 0.5f);
		iConst37 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst34 - fConst36)));
		iConst38 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst36 + -1.0f)));
		float fConst39 = std::floor(0.219991f * fConst0 + 0.5f);
		fConst40 = (0.0f - 6.9077554f * fConst39) / fConst0;
		float fConst41 = std::floor(0.019123f * fConst0 + 0.5f);
		iConst42 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst39 - fConst41)));
		iConst43 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst41 + -1.0f)));
		fConst44 = 44.1f / fConst0;
		fConst45 = 1.0f - fConst44;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(2.0f);
		fVslider1 = FAUSTFLOAT(6e+03f);
		fVslider2 = FAUSTFLOAT(2e+02f);
		fVslider3 = FAUSTFLOAT(3.0f);
		fVslider4 = FAUSTFLOAT(6e+01f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fVslider6 = FAUSTFLOAT(315.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fVslider8 = FAUSTFLOAT(1.5e+03f);
		fVslider9 = FAUSTFLOAT(0.0f);
		fVslider10 = FAUSTFLOAT(-2e+01f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec11[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec10[l1] = 0.0f;
		}
		IOTA0 = 0;
		for (int l2 = 0; l2 < 16384; l2 = l2 + 1) {
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 16384; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 4096; l4 = l4 + 1) {
			fVec2[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec8[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec15[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec14[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 16384; l8 = l8 + 1) {
			fVec3[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2048; l9 = l9 + 1) {
			fVec4[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec12[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec19[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec18[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 16384; l13 = l13 + 1) {
			fVec5[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 4096; l14 = l14 + 1) {
			fVec6[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec16[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec23[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec22[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 16384; l18 = l18 + 1) {
			fVec7[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2048; l19 = l19 + 1) {
			fVec8[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec20[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec27[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec26[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 32768; l23 = l23 + 1) {
			fVec9[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 16384; l24 = l24 + 1) {
			fVec10[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 4096; l25 = l25 + 1) {
			fVec11[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec24[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec31[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec30[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 16384; l29 = l29 + 1) {
			fVec12[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 4096; l30 = l30 + 1) {
			fVec13[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec28[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec35[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec34[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 32768; l34 = l34 + 1) {
			fVec14[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 4096; l35 = l35 + 1) {
			fVec15[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec32[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec39[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec38[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 32768; l39 = l39 + 1) {
			fVec16[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2048; l40 = l40 + 1) {
			fVec17[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec36[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 3; l42 = l42 + 1) {
			fRec0[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 3; l43 = l43 + 1) {
			fRec1[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 3; l44 = l44 + 1) {
			fRec2[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 3; l45 = l45 + 1) {
			fRec3[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 3; l46 = l46 + 1) {
			fRec4[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 3; l47 = l47 + 1) {
			fRec5[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fRec6[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fRec7[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fRec40[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec41[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec42[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec43[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 3; l54 = l54 + 1) {
			fRec44[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 3; l55 = l55 + 1) {
			fRec45[l55] = 0.0f;
		}
	}
	
	FAUSTPP_VIRTUAL void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	FAUSTPP_VIRTUAL void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	FAUSTPP_VIRTUAL mydsp* clone() {
		return new mydsp();
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->declare(0, "0", "");
		ui_interface->declare(0, "tooltip", "~ ZITA REV1 FEEDBACK DELAY NETWORK (FDN) & SCHROEDER     ALLPASS-COMB REVERBERATOR (8x8). See Faust's reverbs.lib for documentation and     references");
		ui_interface->openHorizontalBox("Zita_Rev1");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Input");
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->declare(&fVslider4, "style", "knob");
		ui_interface->declare(&fVslider4, "tooltip", "Delay in ms         before reverberation begins");
		ui_interface->declare(&fVslider4, "unit", "ms");
		ui_interface->addVerticalSlider("In Delay", &fVslider4, FAUSTFLOAT(6e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Decay Times in Bands (see tooltips)");
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "scale", "log");
		ui_interface->declare(&fVslider2, "style", "knob");
		ui_interface->declare(&fVslider2, "tooltip", "Crossover frequency (Hz) separating low and middle frequencies");
		ui_interface->declare(&fVslider2, "unit", "Hz");
		ui_interface->addVerticalSlider("LF X", &fVslider2, FAUSTFLOAT(2e+02f), FAUSTFLOAT(5e+01f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "scale", "log");
		ui_interface->declare(&fVslider3, "style", "knob");
		ui_interface->declare(&fVslider3, "tooltip", "T60 = time (in seconds) to decay 60dB in low-frequency band");
		ui_interface->declare(&fVslider3, "unit", "s");
		ui_interface->addVerticalSlider("Low RT60", &fVslider3, FAUSTFLOAT(3.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(8.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->declare(&fVslider0, "scale", "log");
		ui_interface->declare(&fVslider0, "style", "knob");
		ui_interface->declare(&fVslider0, "tooltip", "T60 = time (in seconds) to decay 60dB in middle band");
		ui_interface->declare(&fVslider0, "unit", "s");
		ui_interface->addVerticalSlider("Mid RT60", &fVslider0, FAUSTFLOAT(2.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(8.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider1, "4", "");
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->declare(&fVslider1, "style", "knob");
		ui_interface->declare(&fVslider1, "tooltip", "Frequency (Hz) at which the high-frequency T60 is half the middle-band's T60");
		ui_interface->declare(&fVslider1, "unit", "Hz");
		ui_interface->addVerticalSlider("HF Damping", &fVslider1, FAUSTFLOAT(6e+03f), FAUSTFLOAT(1.5e+03f), FAUSTFLOAT(2.352e+04f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("RM Peaking Equalizer 1");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "scale", "log");
		ui_interface->declare(&fVslider6, "style", "knob");
		ui_interface->declare(&fVslider6, "tooltip", "Center-frequency of second-order Regalia-Mitra peaking equalizer section 1");
		ui_interface->declare(&fVslider6, "unit", "Hz");
		ui_interface->addVerticalSlider("Eq1 Freq", &fVslider6, FAUSTFLOAT(315.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(2.5e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "2", "");
		ui_interface->declare(&fVslider5, "style", "knob");
		ui_interface->declare(&fVslider5, "tooltip", "Peak level         in dB of second-order Regalia-Mitra peaking equalizer section 1");
		ui_interface->declare(&fVslider5, "unit", "dB");
		ui_interface->addVerticalSlider("Eq1 Level", &fVslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(-15.0f), FAUSTFLOAT(15.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "4", "");
		ui_interface->openHorizontalBox("RM Peaking Equalizer 2");
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->declare(&fVslider8, "scale", "log");
		ui_interface->declare(&fVslider8, "style", "knob");
		ui_interface->declare(&fVslider8, "tooltip", "Center-frequency of second-order Regalia-Mitra peaking equalizer section 2");
		ui_interface->declare(&fVslider8, "unit", "Hz");
		ui_interface->addVerticalSlider("Eq2 Freq", &fVslider8, FAUSTFLOAT(1.5e+03f), FAUSTFLOAT(1.6e+02f), FAUSTFLOAT(1e+04f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "2", "");
		ui_interface->declare(&fVslider7, "style", "knob");
		ui_interface->declare(&fVslider7, "tooltip", "Peak level         in dB of second-order Regalia-Mitra peaking equalizer section 2");
		ui_interface->declare(&fVslider7, "unit", "dB");
		ui_interface->addVerticalSlider("Eq2 Level", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(-15.0f), FAUSTFLOAT(15.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "5", "");
		ui_interface->openHorizontalBox("Output");
		ui_interface->declare(&fVslider9, "1", "");
		ui_interface->declare(&fVslider9, "style", "knob");
		ui_interface->declare(&fVslider9, "tooltip", "-1 = dry, 1 = wet");
		ui_interface->addVerticalSlider("Dry/Wet Mix", &fVslider9, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider10, "2", "");
		ui_interface->declare(&fVslider10, "style", "knob");
		ui_interface->declare(&fVslider10, "tooltip", "Output scale         factor");
		ui_interface->declare(&fVslider10, "unit", "dB");
		ui_interface->addVerticalSlider("Level", &fVslider10, FAUSTFLOAT(-2e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fVslider0);
		float fSlow1 = std::exp(fConst2 / fSlow0);
		float fSlow2 = mydsp_faustpower2_f(fSlow1);
		float fSlow3 = 1.0f - fSlow2;
		float fSlow4 = std::cos(fConst3 * float(fVslider1));
		float fSlow5 = 1.0f - fSlow4 * fSlow2;
		float fSlow6 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow5) / mydsp_faustpower2_f(fSlow3) + -1.0f));
		float fSlow7 = fSlow5 / fSlow3;
		float fSlow8 = fSlow7 - fSlow6;
		float fSlow9 = 1.0f / std::tan(fConst4 * float(fVslider2));
		float fSlow10 = 1.0f - fSlow9;
		float fSlow11 = 1.0f / (fSlow9 + 1.0f);
		float fSlow12 = float(fVslider3);
		float fSlow13 = std::exp(fConst2 / fSlow12) / fSlow1 + -1.0f;
		float fSlow14 = fSlow1 * (fSlow6 + (1.0f - fSlow7));
		int iSlow15 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst7 * float(fVslider4))));
		float fSlow16 = std::exp(fConst10 / fSlow0);
		float fSlow17 = mydsp_faustpower2_f(fSlow16);
		float fSlow18 = 1.0f - fSlow17;
		float fSlow19 = 1.0f - fSlow17 * fSlow4;
		float fSlow20 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow19) / mydsp_faustpower2_f(fSlow18) + -1.0f));
		float fSlow21 = fSlow19 / fSlow18;
		float fSlow22 = fSlow21 - fSlow20;
		float fSlow23 = std::exp(fConst10 / fSlow12) / fSlow16 + -1.0f;
		float fSlow24 = fSlow16 * (fSlow20 + (1.0f - fSlow21));
		float fSlow25 = std::exp(fConst15 / fSlow0);
		float fSlow26 = mydsp_faustpower2_f(fSlow25);
		float fSlow27 = 1.0f - fSlow26;
		float fSlow28 = 1.0f - fSlow4 * fSlow26;
		float fSlow29 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow28) / mydsp_faustpower2_f(fSlow27) + -1.0f));
		float fSlow30 = fSlow28 / fSlow27;
		float fSlow31 = fSlow30 - fSlow29;
		float fSlow32 = std::exp(fConst15 / fSlow12) / fSlow25 + -1.0f;
		float fSlow33 = fSlow25 * (fSlow29 + (1.0f - fSlow30));
		float fSlow34 = std::exp(fConst20 / fSlow0);
		float fSlow35 = mydsp_faustpower2_f(fSlow34);
		float fSlow36 = 1.0f - fSlow35;
		float fSlow37 = 1.0f - fSlow4 * fSlow35;
		float fSlow38 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow37) / mydsp_faustpower2_f(fSlow36) + -1.0f));
		float fSlow39 = fSlow37 / fSlow36;
		float fSlow40 = fSlow39 - fSlow38;
		float fSlow41 = std::exp(fConst20 / fSlow12) / fSlow34 + -1.0f;
		float fSlow42 = fSlow34 * (fSlow38 + (1.0f - fSlow39));
		float fSlow43 = std::exp(fConst25 / fSlow0);
		float fSlow44 = mydsp_faustpower2_f(fSlow43);
		float fSlow45 = 1.0f - fSlow44;
		float fSlow46 = 1.0f - fSlow4 * fSlow44;
		float fSlow47 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow46) / mydsp_faustpower2_f(fSlow45) + -1.0f));
		float fSlow48 = fSlow46 / fSlow45;
		float fSlow49 = fSlow48 - fSlow47;
		float fSlow50 = std::exp(fConst25 / fSlow12) / fSlow43 + -1.0f;
		float fSlow51 = fSlow43 * (fSlow47 + (1.0f - fSlow48));
		float fSlow52 = std::exp(fConst30 / fSlow0);
		float fSlow53 = mydsp_faustpower2_f(fSlow52);
		float fSlow54 = 1.0f - fSlow53;
		float fSlow55 = 1.0f - fSlow4 * fSlow53;
		float fSlow56 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow55) / mydsp_faustpower2_f(fSlow54) + -1.0f));
		float fSlow57 = fSlow55 / fSlow54;
		float fSlow58 = fSlow57 - fSlow56;
		float fSlow59 = std::exp(fConst30 / fSlow12) / fSlow52 + -1.0f;
		float fSlow60 = fSlow52 * (fSlow56 + (1.0f - fSlow57));
		float fSlow61 = std::exp(fConst35 / fSlow0);
		float fSlow62 = mydsp_faustpower2_f(fSlow61);
		float fSlow63 = 1.0f - fSlow62;
		float fSlow64 = 1.0f - fSlow4 * fSlow62;
		float fSlow65 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow64) / mydsp_faustpower2_f(fSlow63) + -1.0f));
		float fSlow66 = fSlow64 / fSlow63;
		float fSlow67 = fSlow66 - fSlow65;
		float fSlow68 = std::exp(fConst35 / fSlow12) / fSlow61 + -1.0f;
		float fSlow69 = fSlow61 * (fSlow65 + (1.0f - fSlow66));
		float fSlow70 = std::exp(fConst40 / fSlow0);
		float fSlow71 = mydsp_faustpower2_f(fSlow70);
		float fSlow72 = 1.0f - fSlow71;
		float fSlow73 = 1.0f - fSlow4 * fSlow71;
		float fSlow74 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow73) / mydsp_faustpower2_f(fSlow72) + -1.0f));
		float fSlow75 = fSlow73 / fSlow72;
		float fSlow76 = fSlow75 - fSlow74;
		float fSlow77 = std::exp(fConst40 / fSlow12) / fSlow70 + -1.0f;
		float fSlow78 = fSlow70 * (fSlow74 + (1.0f - fSlow75));
		float fSlow79 = std::pow(1e+01f, 0.05f * float(fVslider5));
		float fSlow80 = float(fVslider6);
		float fSlow81 = fConst3 * (fSlow80 / std::sqrt(std::max<float>(0.0f, fSlow79)));
		float fSlow82 = (1.0f - fSlow81) / (fSlow81 + 1.0f);
		float fSlow83 = 0.0f - std::cos(fConst3 * fSlow80) * (fSlow82 + 1.0f);
		float fSlow84 = std::pow(1e+01f, 0.05f * float(fVslider7));
		float fSlow85 = float(fVslider8);
		float fSlow86 = fConst3 * (fSlow85 / std::sqrt(std::max<float>(0.0f, fSlow84)));
		float fSlow87 = (1.0f - fSlow86) / (fSlow86 + 1.0f);
		float fSlow88 = 0.0f - std::cos(fConst3 * fSlow85) * (fSlow87 + 1.0f);
		float fSlow89 = fConst44 * float(fVslider9);
		float fSlow90 = fConst44 * std::pow(1e+01f, 0.05f * float(fVslider10));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec11[0] = 0.0f - fSlow11 * (fSlow10 * fRec11[1] - (fRec4[1] + fRec4[2]));
			fRec10[0] = fSlow14 * (fRec4[1] + fSlow13 * fRec11[0]) + fSlow8 * fRec10[1];
			fVec0[IOTA0 & 16383] = 0.35355338f * fRec10[0] + 1e-20f;
			float fTemp0 = float(input0[i0]);
			fVec1[IOTA0 & 16383] = fTemp0;
			float fTemp1 = 0.3f * fVec1[(IOTA0 - iSlow15) & 16383];
			float fTemp2 = fTemp1 + fVec0[(IOTA0 - iConst6) & 16383] - 0.6f * fRec8[1];
			fVec2[IOTA0 & 4095] = fTemp2;
			fRec8[0] = fVec2[(IOTA0 - iConst8) & 4095];
			float fRec9 = 0.6f * fTemp2;
			fRec15[0] = 0.0f - fSlow11 * (fSlow10 * fRec15[1] - (fRec0[1] + fRec0[2]));
			fRec14[0] = fSlow24 * (fRec0[1] + fSlow23 * fRec15[0]) + fSlow22 * fRec14[1];
			fVec3[IOTA0 & 16383] = 0.35355338f * fRec14[0] + 1e-20f;
			float fTemp3 = fVec3[(IOTA0 - iConst12) & 16383] + fTemp1 - 0.6f * fRec12[1];
			fVec4[IOTA0 & 2047] = fTemp3;
			fRec12[0] = fVec4[(IOTA0 - iConst13) & 2047];
			float fRec13 = 0.6f * fTemp3;
			float fTemp4 = fRec13 + fRec9;
			fRec19[0] = 0.0f - fSlow11 * (fSlow10 * fRec19[1] - (fRec2[1] + fRec2[2]));
			fRec18[0] = fSlow33 * (fRec2[1] + fSlow32 * fRec19[0]) + fSlow31 * fRec18[1];
			fVec5[IOTA0 & 16383] = 0.35355338f * fRec18[0] + 1e-20f;
			float fTemp5 = fVec5[(IOTA0 - iConst17) & 16383] - (fTemp1 + 0.6f * fRec16[1]);
			fVec6[IOTA0 & 4095] = fTemp5;
			fRec16[0] = fVec6[(IOTA0 - iConst18) & 4095];
			float fRec17 = 0.6f * fTemp5;
			fRec23[0] = 0.0f - fSlow11 * (fSlow10 * fRec23[1] - (fRec6[1] + fRec6[2]));
			fRec22[0] = fSlow42 * (fRec6[1] + fSlow41 * fRec23[0]) + fSlow40 * fRec22[1];
			fVec7[IOTA0 & 16383] = 0.35355338f * fRec22[0] + 1e-20f;
			float fTemp6 = fVec7[(IOTA0 - iConst22) & 16383] - (fTemp1 + 0.6f * fRec20[1]);
			fVec8[IOTA0 & 2047] = fTemp6;
			fRec20[0] = fVec8[(IOTA0 - iConst23) & 2047];
			float fRec21 = 0.6f * fTemp6;
			float fTemp7 = fRec21 + fRec17 + fTemp4;
			fRec27[0] = 0.0f - fSlow11 * (fSlow10 * fRec27[1] - (fRec1[1] + fRec1[2]));
			fRec26[0] = fSlow51 * (fRec1[1] + fSlow50 * fRec27[0]) + fSlow49 * fRec26[1];
			fVec9[IOTA0 & 32767] = 0.35355338f * fRec26[0] + 1e-20f;
			float fTemp8 = float(input1[i0]);
			fVec10[IOTA0 & 16383] = fTemp8;
			float fTemp9 = 0.3f * fVec10[(IOTA0 - iSlow15) & 16383];
			float fTemp10 = fTemp9 + 0.6f * fRec24[1] + fVec9[(IOTA0 - iConst27) & 32767];
			fVec11[IOTA0 & 4095] = fTemp10;
			fRec24[0] = fVec11[(IOTA0 - iConst28) & 4095];
			float fRec25 = 0.0f - 0.6f * fTemp10;
			fRec31[0] = 0.0f - fSlow11 * (fSlow10 * fRec31[1] - (fRec5[1] + fRec5[2]));
			fRec30[0] = fSlow60 * (fRec5[1] + fSlow59 * fRec31[0]) + fSlow58 * fRec30[1];
			fVec12[IOTA0 & 16383] = 0.35355338f * fRec30[0] + 1e-20f;
			float fTemp11 = fVec12[(IOTA0 - iConst32) & 16383] + fTemp9 + 0.6f * fRec28[1];
			fVec13[IOTA0 & 4095] = fTemp11;
			fRec28[0] = fVec13[(IOTA0 - iConst33) & 4095];
			float fRec29 = 0.0f - 0.6f * fTemp11;
			fRec35[0] = 0.0f - fSlow11 * (fSlow10 * fRec35[1] - (fRec3[1] + fRec3[2]));
			fRec34[0] = fSlow69 * (fRec3[1] + fSlow68 * fRec35[0]) + fSlow67 * fRec34[1];
			fVec14[IOTA0 & 32767] = 0.35355338f * fRec34[0] + 1e-20f;
			float fTemp12 = 0.6f * fRec32[1] + fVec14[(IOTA0 - iConst37) & 32767] - fTemp9;
			fVec15[IOTA0 & 4095] = fTemp12;
			fRec32[0] = fVec15[(IOTA0 - iConst38) & 4095];
			float fRec33 = 0.0f - 0.6f * fTemp12;
			fRec39[0] = 0.0f - fSlow11 * (fSlow10 * fRec39[1] - (fRec7[1] + fRec7[2]));
			fRec38[0] = fSlow78 * (fRec7[1] + fSlow77 * fRec39[0]) + fSlow76 * fRec38[1];
			fVec16[IOTA0 & 32767] = 0.35355338f * fRec38[0] + 1e-20f;
			float fTemp13 = 0.6f * fRec36[1] + fVec16[(IOTA0 - iConst42) & 32767] - fTemp9;
			fVec17[IOTA0 & 2047] = fTemp13;
			fRec36[0] = fVec17[(IOTA0 - iConst43) & 2047];
			float fRec37 = 0.0f - 0.6f * fTemp13;
			fRec0[0] = fRec36[1] + fRec32[1] + fRec28[1] + fRec24[1] + fRec20[1] + fRec16[1] + fRec8[1] + fRec12[1] + fRec37 + fRec33 + fRec29 + fRec25 + fTemp7;
			fRec1[0] = fRec20[1] + fRec16[1] + fRec8[1] + fRec12[1] + fTemp7 - (fRec36[1] + fRec32[1] + fRec28[1] + fRec24[1] + fRec37 + fRec33 + fRec25 + fRec29);
			float fTemp14 = fRec17 + fRec21;
			fRec2[0] = fRec28[1] + fRec24[1] + fRec8[1] + fRec12[1] + fRec29 + fRec25 + fTemp4 - (fRec36[1] + fRec32[1] + fRec20[1] + fRec16[1] + fRec37 + fRec33 + fTemp14);
			fRec3[0] = fRec36[1] + fRec32[1] + fRec8[1] + fRec12[1] + fRec37 + fRec33 + fTemp4 - (fRec28[1] + fRec24[1] + fRec20[1] + fRec16[1] + fRec29 + fRec25 + fTemp14);
			float fTemp15 = fRec9 + fRec21;
			float fTemp16 = fRec13 + fRec17;
			fRec4[0] = fRec32[1] + fRec24[1] + fRec16[1] + fRec12[1] + fRec33 + fRec25 + fTemp16 - (fRec36[1] + fRec28[1] + fRec20[1] + fRec8[1] + fRec37 + fRec29 + fTemp15);
			fRec5[0] = fRec36[1] + fRec28[1] + fRec16[1] + fRec12[1] + fRec37 + fRec29 + fTemp16 - (fRec32[1] + fRec24[1] + fRec20[1] + fRec8[1] + fRec33 + fRec25 + fTemp15);
			float fTemp17 = fRec9 + fRec17;
			float fTemp18 = fRec13 + fRec21;
			fRec6[0] = fRec36[1] + fRec24[1] + fRec20[1] + fRec12[1] + fRec37 + fRec25 + fTemp18 - (fRec32[1] + fRec28[1] + fRec16[1] + fRec8[1] + fRec33 + fRec29 + fTemp17);
			fRec7[0] = fRec32[1] + fRec28[1] + fRec20[1] + fRec12[1] + fRec33 + fRec29 + fTemp18 - (fRec36[1] + fRec24[1] + fRec16[1] + fRec8[1] + fRec37 + fRec25 + fTemp17);
			float fTemp19 = 0.37f * (fRec1[0] + fRec2[0]);
			float fTemp20 = fSlow83 * fRec40[1];
			fRec40[0] = fTemp19 - (fTemp20 + fSlow82 * fRec40[2]);
			float fTemp21 = fSlow82 * fRec40[0];
			float fTemp22 = 0.5f * (fTemp21 + fRec40[2] + fTemp19 + fTemp20 + fSlow79 * (fTemp21 + fTemp20 + fRec40[2] - fTemp19));
			float fTemp23 = fSlow88 * fRec41[1];
			fRec41[0] = fTemp22 - (fTemp23 + fSlow87 * fRec41[2]);
			float fTemp24 = fSlow87 * fRec41[0];
			fRec42[0] = fSlow89 + fConst45 * fRec42[1];
			float fTemp25 = fRec42[0] + 1.0f;
			float fTemp26 = 1.0f - 0.5f * fTemp25;
			fRec43[0] = fSlow90 + fConst45 * fRec43[1];
			output0[i0] = FAUSTFLOAT(0.5f * fRec43[0] * (fTemp0 * fTemp25 + fTemp26 * (fTemp24 + fRec41[2] + fTemp22 + fTemp23 + fSlow84 * (fTemp24 + fTemp23 + fRec41[2] - fTemp22))));
			float fTemp27 = 0.37f * (fRec1[0] - fRec2[0]);
			float fTemp28 = fSlow83 * fRec44[1];
			fRec44[0] = fTemp27 - (fTemp28 + fSlow82 * fRec44[2]);
			float fTemp29 = fSlow82 * fRec44[0];
			float fTemp30 = 0.5f * (fTemp29 + fRec44[2] + fTemp27 + fTemp28 + fSlow79 * (fTemp29 + fTemp28 + fRec44[2] - fTemp27));
			float fTemp31 = fSlow88 * fRec45[1];
			fRec45[0] = fTemp30 - (fTemp31 + fSlow87 * fRec45[2]);
			float fTemp32 = fSlow87 * fRec45[0];
			output1[i0] = FAUSTFLOAT(0.5f * fRec43[0] * (fTemp8 * fTemp25 + fTemp26 * (fTemp32 + fRec45[2] + fTemp30 + fTemp31 + fSlow84 * (fTemp32 + fTemp31 + fRec45[2] - fTemp30))));
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			IOTA0 = IOTA0 + 1;
			fRec8[1] = fRec8[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec12[1] = fRec12[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fRec16[1] = fRec16[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fRec20[1] = fRec20[0];
			fRec27[1] = fRec27[0];
			fRec26[1] = fRec26[0];
			fRec24[1] = fRec24[0];
			fRec31[1] = fRec31[0];
			fRec30[1] = fRec30[0];
			fRec28[1] = fRec28[0];
			fRec35[1] = fRec35[0];
			fRec34[1] = fRec34[0];
			fRec32[1] = fRec32[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fRec36[1] = fRec36[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec40[2] = fRec40[1];
			fRec40[1] = fRec40[0];
			fRec41[2] = fRec41[1];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fRec43[1] = fRec43[0];
			fRec44[2] = fRec44[1];
			fRec44[1] = fRec44[0];
			fRec45[2] = fRec45[1];
			fRec45[1] = fRec45[0];
		}
	}

};
FAUSTPP_END_NAMESPACE


#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif



//------------------------------------------------------------------------------
// End the Faust code section




DFZitaRev1::DFZitaRev1()
{

    mydsp *dsp = new mydsp;
    fDsp.reset(dsp);
    dsp->instanceResetUserInterface();

}

DFZitaRev1::~DFZitaRev1()
{
}

void DFZitaRev1::init(float sample_rate)
{

    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.classInit(sample_rate);
    dsp.instanceConstants(sample_rate);
    clear();

}

void DFZitaRev1::clear() noexcept
{

    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.instanceClear();

}

void DFZitaRev1::process(
    const float *in0,const float *in1,
    float *out0,float *out1,
    unsigned count) noexcept
{

    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    float *inputs[] = {
        const_cast<float *>(in0),const_cast<float *>(in1),
    };
    float *outputs[] = {
        out0,out1,
    };
    dsp.compute(count, inputs, outputs);

}

const char *DFZitaRev1::parameter_label(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "In Delay";
    
    case 1:
        return "LF X";
    
    case 2:
        return "Low RT60";
    
    case 3:
        return "Mid RT60";
    
    case 4:
        return "HF Damping";
    
    case 5:
        return "Eq1 Freq";
    
    case 6:
        return "Eq1 Level";
    
    case 7:
        return "Eq2 Freq";
    
    case 8:
        return "Eq2 Level";
    
    case 9:
        return "Dry/Wet Mix";
    
    case 10:
        return "Level";
    
    default:
        return 0;
    }
}

const char *DFZitaRev1::parameter_short_label(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "";
    
    case 1:
        return "";
    
    case 2:
        return "";
    
    case 3:
        return "";
    
    case 4:
        return "";
    
    case 5:
        return "";
    
    case 6:
        return "";
    
    case 7:
        return "";
    
    case 8:
        return "";
    
    case 9:
        return "";
    
    case 10:
        return "";
    
    default:
        return 0;
    }
}

const char *DFZitaRev1::parameter_symbol(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "In_Delay";
    
    case 1:
        return "LF_X";
    
    case 2:
        return "Low_RT60";
    
    case 3:
        return "Mid_RT60";
    
    case 4:
        return "HF_Damping";
    
    case 5:
        return "Eq1_Freq";
    
    case 6:
        return "Eq1_Level";
    
    case 7:
        return "Eq2_Freq";
    
    case 8:
        return "Eq2_Level";
    
    case 9:
        return "Dry_Wet_Mix";
    
    case 10:
        return "Level";
    
    default:
        return 0;
    }
}

const char *DFZitaRev1::parameter_unit(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "ms";
    
    case 1:
        return "Hz";
    
    case 2:
        return "s";
    
    case 3:
        return "s";
    
    case 4:
        return "Hz";
    
    case 5:
        return "Hz";
    
    case 6:
        return "dB";
    
    case 7:
        return "Hz";
    
    case 8:
        return "dB";
    
    case 9:
        return "";
    
    case 10:
        return "dB";
    
    default:
        return 0;
    }
}

const DFZitaRev1::ParameterRange *DFZitaRev1::parameter_range(unsigned index) noexcept
{
    switch (index) {
    
    case 0: {
        static const ParameterRange range = { 60.0, 20.0, 100.0 };
        return &range;
    }
    
    case 1: {
        static const ParameterRange range = { 200.0, 50.0, 1000.0 };
        return &range;
    }
    
    case 2: {
        static const ParameterRange range = { 3.0, 1.0, 8.0 };
        return &range;
    }
    
    case 3: {
        static const ParameterRange range = { 2.0, 1.0, 8.0 };
        return &range;
    }
    
    case 4: {
        static const ParameterRange range = { 6000.0, 1500.0, 23520.0 };
        return &range;
    }
    
    case 5: {
        static const ParameterRange range = { 315.0, 40.0, 2500.0 };
        return &range;
    }
    
    case 6: {
        static const ParameterRange range = { 0.0, -15.0, 15.0 };
        return &range;
    }
    
    case 7: {
        static const ParameterRange range = { 1500.0, 160.0, 10000.0 };
        return &range;
    }
    
    case 8: {
        static const ParameterRange range = { 0.0, -15.0, 15.0 };
        return &range;
    }
    
    case 9: {
        static const ParameterRange range = { 0.0, -1.0, 1.0 };
        return &range;
    }
    
    case 10: {
        static const ParameterRange range = { -20.0, -70.0, 40.0 };
        return &range;
    }
    
    default:
        return 0;
    }
}

bool DFZitaRev1::parameter_is_trigger(unsigned index) noexcept
{
    switch (index) {
    
    default:
        return false;
    }
}

bool DFZitaRev1::parameter_is_boolean(unsigned index) noexcept
{
    switch (index) {
    
    default:
        return false;
    }
}

bool DFZitaRev1::parameter_is_integer(unsigned index) noexcept
{
    switch (index) {
    
    default:
        return false;
    }
}

bool DFZitaRev1::parameter_is_logarithmic(unsigned index) noexcept
{
    switch (index) {
    
    case 1:
        return true;
    
    case 2:
        return true;
    
    case 3:
        return true;
    
    case 4:
        return true;
    
    case 5:
        return true;
    
    case 7:
        return true;
    
    default:
        return false;
    }
}

float DFZitaRev1::get_parameter(unsigned index) const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    switch (index) {
    
    case 0:
        return dsp.fVslider4;
    
    case 1:
        return dsp.fVslider2;
    
    case 2:
        return dsp.fVslider3;
    
    case 3:
        return dsp.fVslider0;
    
    case 4:
        return dsp.fVslider1;
    
    case 5:
        return dsp.fVslider6;
    
    case 6:
        return dsp.fVslider5;
    
    case 7:
        return dsp.fVslider8;
    
    case 8:
        return dsp.fVslider7;
    
    case 9:
        return dsp.fVslider9;
    
    case 10:
        return dsp.fVslider10;
    
    default:
        (void)dsp;
        return 0;
    }
}

void DFZitaRev1::set_parameter(unsigned index, float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    switch (index) {
    
    case 0:
        dsp.fVslider4 = value;
        break;
    
    case 1:
        dsp.fVslider2 = value;
        break;
    
    case 2:
        dsp.fVslider3 = value;
        break;
    
    case 3:
        dsp.fVslider0 = value;
        break;
    
    case 4:
        dsp.fVslider1 = value;
        break;
    
    case 5:
        dsp.fVslider6 = value;
        break;
    
    case 6:
        dsp.fVslider5 = value;
        break;
    
    case 7:
        dsp.fVslider8 = value;
        break;
    
    case 8:
        dsp.fVslider7 = value;
        break;
    
    case 9:
        dsp.fVslider9 = value;
        break;
    
    case 10:
        dsp.fVslider10 = value;
        break;
    
    default:
        (void)dsp;
        (void)value;
        break;
    }
}


float DFZitaRev1::get_In_Delay() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider4;
}

float DFZitaRev1::get_LF_X() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider2;
}

float DFZitaRev1::get_Low_RT60() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider3;
}

float DFZitaRev1::get_Mid_RT60() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider0;
}

float DFZitaRev1::get_HF_Damping() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider1;
}

float DFZitaRev1::get_Eq1_Freq() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider6;
}

float DFZitaRev1::get_Eq1_Level() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider5;
}

float DFZitaRev1::get_Eq2_Freq() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider8;
}

float DFZitaRev1::get_Eq2_Level() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider7;
}

float DFZitaRev1::get_Dry_Wet_Mix() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider9;
}

float DFZitaRev1::get_Level() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fVslider10;
}


void DFZitaRev1::set_In_Delay(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider4 = value;
}

void DFZitaRev1::set_LF_X(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider2 = value;
}

void DFZitaRev1::set_Low_RT60(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider3 = value;
}

void DFZitaRev1::set_Mid_RT60(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider0 = value;
}

void DFZitaRev1::set_HF_Damping(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider1 = value;
}

void DFZitaRev1::set_Eq1_Freq(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider6 = value;
}

void DFZitaRev1::set_Eq1_Level(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider5 = value;
}

void DFZitaRev1::set_Eq2_Freq(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider8 = value;
}

void DFZitaRev1::set_Eq2_Level(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider7 = value;
}

void DFZitaRev1::set_Dry_Wet_Mix(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider9 = value;
}

void DFZitaRev1::set_Level(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fVslider10 = value;
}



