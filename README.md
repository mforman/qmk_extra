# QMK Keymaps

This is a small repo that contains my custom keymaps and userspace code for QMK.

I got frustrated with keeping my fork of QMK up to date and dealing with merge conflicts. This allows me to keep everything separate.

Bonus - this also keeps VS Code happy by not trying to load the massive C project.

## Usage

1. Clone the [official QMK repo](https://github.com/qmk/qmk_firmware). No need to fork it unless you are committing changes back upstream.
1. From the local QMK folder run: `bash <path to keymap repo>/add_links.sh`
1. Build and flash as normal (ie. `make crkbd:mforman:avrdude-split-right`)

When finished, discard local changes in the QMK repo so you merge upstream changes with no conflict next time.
