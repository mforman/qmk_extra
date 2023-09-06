#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
QMK_DIR=$(realpath ${1:-$(pwd)})

echo "Local: $SCRIPT_DIR"
echo "QMK:   $QMK_DIR"


ln -sf $SCRIPT_DIR/users/mforman $QMK_DIR/users/mforman
ln -sf $SCRIPT_DIR/keyboards/crkbd/keymaps/mforman $QMK_DIR/keyboards/crkbd/keymaps/mforman
ln -sf $SCRIPT_DIR/keyboards/ergodox_ez/keymaps/mforman $QMK_DIR/keyboards/ergodox_ez/keymaps/mforman
ln -sf $SCRIPT_DIR/keyboards/gboards/gergoplex/keymaps/mforman $QMK_DIR/keyboards/gboards/gergoplex/keymaps/mforman

find * -type l -not -exec grep -q "^{}$" .gitignore \; -print >> .gitignore