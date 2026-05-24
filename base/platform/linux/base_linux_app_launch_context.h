/*
This file is part of Ansible Desktop, a fork of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
*/
#pragma once

namespace gi::repository::Gio {
class AppLaunchContext;
} // namespace gi::repository::Gio

namespace base::Platform {

gi::repository::Gio::AppLaunchContext AppLaunchContext();

} // namespace base::Platform
