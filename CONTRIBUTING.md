# Contributing to Bedrock

Thank you for contributing to Bedrock! Please follow these guidelines:

- **Code Style**: Run `clang-format` on all C++ files.
- **Testing**: Add Google Test cases for new features in `tests/`.
- **Documentation**: Document public APIs with Doxygen comments (Doxygen setup pending).
- **Commits**: Use clear, concise commit messages (e.g., "Add LUF coordinate utilities").
- **Pull Requests**: Submit PRs against the `main` branch, ensuring CI passes.

Run `cmake --build build && ctest --test-dir build` to verify changes.