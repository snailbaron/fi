#pragma once

#include <cstddef>
#include <filesystem>
#include <span>
#include <vector>

namespace fi {

std::filesystem::path userConfigPath();
std::filesystem::path globalConfigPath();

std::vector<std::byte> read(const std::filesystem::path& path);

void write(
    const std::filesystem::path& path, const std::byte* data, size_t size);
void write(
    const std::filesystem::path& path, const std::span<const std::byte>& data);

} // namespace fi
