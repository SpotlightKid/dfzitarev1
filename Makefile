#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX, Christopher Arndt, and Patrick Desaulniers
#

include dpf/Makefile.base.mk

all: libs plugins gen

# --------------------------------------------------------------

submodules:
	-test -d .gitmodules && git submodule update --init --recursive

libs: patch

patch:
	-patch -d dpf -r - -p1 -N -i ../patches/dpf/no-port-name-lv2-prefix.patch
	-patch -d dpf -r - -p1 -N -i ../patches/dpf/fix-lv2-version-export.patch

plugins: libs
	$(MAKE) all -C plugins/dfzitarev1

ifneq ($(CROSS_COMPILING),true)
gen: plugins dpf/utils/lv2_ttl_generator
	@$(CURDIR)/dpf/utils/generate-ttl.sh
ifeq ($(MACOS),true)
	@$(CURDIR)/dpf/utils/generate-vst-bundles.sh
endif

dpf/utils/lv2_ttl_generator:
	$(MAKE) -C dpf/utils/lv2-ttl-generator
else
gen: plugins dpf/utils/lv2_ttl_generator.exe
	@$(CURDIR)/dpf/utils/generate-ttl.sh

dpf/utils/lv2_ttl_generator.exe:
	$(MAKE) -C dpf/utils/lv2-ttl-generator WINDOWS=true
endif

# --------------------------------------------------------------

lv2lint:
	$(MAKE) lv2lint -C plugins/dfzitarev1

# --------------------------------------------------------------

clean:
	$(MAKE) clean -C dpf/utils/lv2-ttl-generator
	$(MAKE) clean -C plugins/dfzitarev1
	rm -rf bin build

install: all
	$(MAKE) install -C plugins/dfzitarev1

install-user: all
	$(MAKE) install-user -C plugins/dfzitarev1

# --------------------------------------------------------------

.PHONY: all clean faust gen install install-user libs lv2lint patch plugins submodule
