#!/bin/bash

export keyboards=( "crkbd" "ferris/sweep" )
export folders=( "crkbd" "ferris" )
export columns=(12 10)

for i in "${!keyboards[@]}"; do

    qmk c2json -kb ${keyboards[i]} -km ezxzeng -o user_keymaps/${folders[i]}/keymap.json user_keymaps/${folders[i]}/keymap.c
    keymap parse -c "${columns[i]}" -q user_keymaps/${folders[i]}/keymap.json >user_keymaps/${folders[i]}/keymap.yaml
    keymap draw user_keymaps/${folders[i]}/keymap.yaml >user_keymaps/${folders[i]}/keymap.svg
    rm user_keymaps/${folders[i]}/keymap.json
    rm user_keymaps/${folders[i]}/keymap.yaml

done

# for cases where the json file already exists, don't parse to json again
# export keyboards=( "crkbd" "ferris/sweep" )
# export folders=( "crkbd" "ferris" )
# export columns=(12 10)

# for i in "${!keyboards[@]}"; do
#     keymap parse -c "${columns[i]}" -q user_keymaps/${folders[i]}/keymap.json >user_keymaps/${folders[i]}/keymap.yaml
#     keymap draw user_keymaps/${folders[i]}/keymap.yaml >user_keymaps/${folders[i]}/keymap.svg
#     rm user_keymaps/${folders[i]}/keymap.yaml
# done
