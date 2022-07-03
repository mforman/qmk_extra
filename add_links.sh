#!/bin/bash

SCRIPT_PATH=$(dirname $(realpath -s $0))
QMK_PATH=${1:-$(pwd)}

echo "Local: $SCRIPT_PATH"
echo "QMK:   $QMK_PATH"


ln -sf $SCRIPT_PATH/users/mforman $QMK_PATH/users/mforman
ln -sf $SCRIPT_PATH/keyboards/crkbd/keymaps/mforman $QMK_PATH/keyboards/crkbd/keymaps/mforman
ln -sf $SCRIPT_PATH/keyboards/ergodox_ez/keymaps/mforman $QMK_PATH/keyboards/ergodox_ez/keymaps/mforman
ln -sf $SCRIPT_PATH/keyboards/gboards/gergoplex/keymaps/mforman $QMK_PATH/keyboards/gboards/gergoplex/keymaps/mforman
