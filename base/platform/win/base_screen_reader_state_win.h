// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "base/screen_reader_state.h"
#include "base/weak_ptr.h"
#include "base/timer.h"

#include <QAccessible>

namespace base::Platform {

class WinScreenReaderState final
	: public ScreenReaderState
	, public base::has_weak_ptr
	, public QAccessible::ActivationObserver {
public:
	WinScreenReaderState();
	~WinScreenReaderState() override;

	bool active() const override;
	rpl::producer<bool> activeValue() const override;

private:
	void accessibilityActiveChanged(bool active) override;
	void startCheck();

	rpl::variable<bool> _isActive;
	base::Timer _timer;
	bool _checking = false;
	bool _qaccessibleActive = false;
	int _checkGeneration = 0;

};

} // namespace base::Platform
