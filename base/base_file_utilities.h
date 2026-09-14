// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

namespace base {

[[nodiscard]] QString FileNameFromUserString(QString name);

void RegisterBundledResources(const QString &name);

} // namespace base
