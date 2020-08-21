declare name "DFZitaRev1";
declare description "A feedback-delay-network reverb";
declare author "Christopher Arndt";
declare license "MIT license";

import("stdfaust.lib");

gain = hslider("[0]Gain [symbol: gain][abbrev: gain][unit: dB]", -6.0, -90.0, 30.0, 0.1):si.smoo;

process = _ * ba.db2linear(gain);
