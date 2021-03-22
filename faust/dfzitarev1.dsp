declare name "DFZitaRev1";
declare description "A feedback-delay-network reverb";
declare author "Julius O. Smith III, Christopher Arndt";
declare copyright "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>";
declare license "STK-4.3 license";
declare version "0.1.0";

import("stdfaust.lib");

process = _,_ : dm.zita_rev1 : _,_;
