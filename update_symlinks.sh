#!/bin/bash
# inspired by https://github.com/patrick-elmquist/qmk-keymaps
USER=ezxzeng

ln -sf $(pwd)/user qmk_firmware/users/${USER}
echo "users/${USER}"

while IFS="," read -r keyboard_name qmk_path
do
	# remove trailing and leading white space
	keyboard_name="${keyboard_name#"${keyboard_name%%[![:space:]]*}"}"
	keyboard_name="${keyboard_name%"${keyboard_name##*[![:space:]]}"}"
	qmk_path="${qmk_path#"${qmk_path%%[![:space:]]*}"}"
	qmk_path="${qmk_path%"${qmk_path##*[![:space:]]}"}"
	# echo "keyboard_name: $keyboard_name, qmk_path: $qmk_path"

	keymap_path="keyboards/${qmk_path}/keymaps/${USER}"
	source_path="$(pwd)/user_keymaps/${keyboard_name}"

	# add new symlinks,forced
	ln -sf ${source_path} qmk_firmware/${keymap_path}

	# print for easy adding to gitignore
	echo ${keymap_path}

done < <(tail -n +2 user_keymaps/paths.csv)
