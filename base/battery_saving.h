// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

namespace base::Platform {

class AbstractBatterySaving {
public:
	virtual ~AbstractBatterySaving() = default;

	virtual std::optional<bool> enabled() const = 0;
};

[[nodiscard]] std::unique_ptr<AbstractBatterySaving> CreateBatterySaving(
	Fn<void()> changeCallback);

} // namespace base::Platform

namespace base {

class BatterySaving final {
public:
	BatterySaving();
	~BatterySaving();

	[[nodiscard]] bool supported() const {
		return enabled().has_value();
	}
	[[nodiscard]] std::optional<bool> enabled() const;
	[[nodiscard]] rpl::producer<bool> value() const;

private:
	const std::unique_ptr<Platform::AbstractBatterySaving> _helper;

	rpl::variable<std::optional<bool>> _value;

};

} // namespace base
