# Bedrock

**Bedrock** aims to be a lightweight modern project foundation for building games and performance-critical applications.

## Purpose

Ease development of new projects by offering a curated set of low-friction libraries and tools, with a focus on portability and efficiency.

## Key Features

- **Core Libraries**:
  - **Google Test**: Robust unit testing.
  - **spdlog**: Fast logging with C++23 `std::format`.
  - **Taskflow**: Task-based parallelism for CPU workloads.
  - **Tracy**: Lightweight CPU/GPU profiling.
  - **GLM**: 3D math for vectors, matrices, and transformations.
  - **range-v3**: Advanced range-based data processing for tasks like mesh generation.
- **Tools**:
  - **Git**: Version control for collaboration.
  - **vcpkg**: Dependency management for easy library integration.
  - **CMake**: Cross-platform build system.
  - **Clang-Format**: Consistent code style enforcement.
  - **Doxygen**: Comprehensive documentation generation.
  - **GitHub Actions**: Cloud-hosted CI/CD for automated builds, tests, and deployments.
- **No UI/Rendering**: Graphics-agnostic, compatible with any rendering pipeline (DirectX, Vulkan, etc.).
- **C++23 Focus**: Leverages modern standards for type safety and expressiveness.
- **Extensibility**: Modular design aims to integrate with game engines or custom frameworks. Future versions may explore a plugin system for added flexibility.

## Coordinate System

Bedrock does not enforce (or yet have) a particular coordinate system, allowing flexibility for any rendering API you choose.
We are interested in experimenting with a right-handed LUF (+X left, +Y up, +Z forward) system Epic Games seems to be adopting in Unreal Engine 6 to align with content tools and industry trends.

## Use Cases

- Foundational logic for small-to-medium game projects.
- Mesh generation and data processing for 3D applications.
- Performance optimization in real-time systems.
- Cross-platform development with minimal dependencies.

## Getting Started

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/tmek/bedrock.git
   ```
2. **Install Dependencies**: Use vcpkg to fetch libraries.
   ```bash
   vcpkg install spdlog gtest taskflow tracy glm range-v3
   ```
3. **Configure Build**: Use CMake to generate build files.
   ```bash
   mkdir build && cd build
   cmake .. -DCMAKE_TOOLCHAIN_FILE=/path/to/vcpkg.cmake
   ```
4. **Build**:
   ```bash
   cmake --build .
   ```
5. **Run Tests**:
   ```bash
   ctest
   ```

## CI/CD with GitHub Actions

Bedrock uses GitHub Actions for automated builds, tests, and linting. Example workflow (`.github/workflows/ci.yml`):
```yaml
name: Bedrock CI
on: [push, pull_request]
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - name: Install Dependencies
        run: vcpkg install spdlog gtest taskflow tracy glm range-v3
      - name: Configure
        run: cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=/path/to/vcpkg.cmake
      - name: Build
        run: cmake --build build
      - name: Test
        run: ctest --test-dir build
```

## Contributing

Contributions are welcome! Please follow the [CONTRIBUTING.md](CONTRIBUTING.md) guidelines. Use Clang-Format for code style and document changes with Doxygen.

## License

Bedrock is licensed under the [MIT License](LICENSE). See the LICENSE file for details.