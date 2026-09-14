// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include <QtCore/QString>
#include <QtCore/QByteArray>
#include <string_view>

namespace base {

class const_string final : public std::string_view {
public:
	using std::string_view::string_view;

	[[nodiscard]] QString utf16() const {
		return QString::fromUtf8(data(), size());
	}

	[[nodiscard]] QByteArray utf8() const {
		return QByteArray::fromRawData(data(), size());
	}

};

} // namespace base

[[nodiscard]] inline constexpr base::const_string operator""_cs(
		const char *data,
		std::size_t size) {
	return { data, size };
}
