#!/usr/bin/env bash
set -e

clean() {
    rm -rf bindings/ src/ .build/
    rm -rf ./*.dylib.dSYM ./*.gyp ./*.dylib ./*.pc ./*.a
    rm -rf .gitignore .gitattributes .editorconfig
    rm -rf build.zig build.zig.zon package.json package-lock.json
    rm -f Makefile Cargo.toml Package.swift go.mod pyproject.toml setup.py CMakeLists.txt
}

build() {
    tree-sitter init --update
    tree-sitter generate
    tree-sitter build
    make clean
    make
}

check() {
    npm i
    make test
    tree-sitter parse pdxinfo
}

case "${1:-}" in
    clean)
        clean
        ;;
    build)
        build
        ;;
    check)
        check
        ;;
    "")
        clean
        build
        check
        ;;
    *)
        echo "Usage: $0 [clean|build|check]"
        exit 1
        ;;
esac
