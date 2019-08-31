#!/bin/bash
### ----------------------------------------------------------------------
### Copyright (C) 2019 Geraldo Ribeiro <geraldo@intmain.io>
### ----------------------------------------------------------------------

export PackageName=GrBenchmark
export SKIP_WIN32=YES
export SKIP_WIN64=YES
export SKIP_TEST_WIN32=YES
export SKIP_TEST_WIN64=YES

function installFiles {
  copyToInclude GrBenchmark.hpp
}

function installMacOSFiles {
  installFiles
}

function installLinuxFiles {
  installFiles
}

function installWin32Files {
  installFiles
}

function installWin64Files {
  installFiles
}

# shellcheck disable=SC1090
source "/opt/intmain/dev/${OS}/usr/share/Gr/scripts/Common/intmain.bash"

if [ -z "$*" ]; then
  eval compileTestAndInstall
else
  eval "$*"
fi
