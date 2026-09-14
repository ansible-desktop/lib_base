// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "base/platform/win/base_windows_wrl.h"

#pragma warning(push)
// class has virtual functions, but destructor is not virtual
#pragma warning(disable:4265)
#include <wrl/implements.h>
#pragma warning(pop)
