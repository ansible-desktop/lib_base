// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "base/screen_reader_state.h"

namespace base::Platform {

class MacScreenReaderState final : public ScreenReaderState {
public:
	MacScreenReaderState();
	~MacScreenReaderState() override;

	bool active() const override;
	rpl::producer<bool> activeValue() const override;

private:
	rpl::variable<bool> _isActive;

};

} // namespace base::Platform
