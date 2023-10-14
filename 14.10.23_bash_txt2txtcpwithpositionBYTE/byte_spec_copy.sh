#!/bin/bash


#text
read -e -p "Vor textinc vercnem???" vortexic_karda

#byte_start_end_
read -p "Vor <BYTE> position-ic sksem?" text_start_1
read -p "Vor <BYTE> position-ov avartem?" text_end_1


#printing (for now) ???


target=$(dd if="$vortexic_karda" skip="$text_start_1" bs=1 count=$((text_end_1 - text_start_1)) 2>/dev/null)



echo "Yntrvats hatvats<"
echo "$target"
echo ">"



#output_file
read -e -p "Ur dnem?" ur_dnem

#byte_start_end_printing
read -p "Vor <BYTE> position-ic sksem nermutsumy?" paste_start



# Write the text at the specified byte position
    dd if=/dev/zero of="$ur_dnem" bs=1 count=0 seek="$paste_start" conv=notrunc status=none
    echo "$target" | dd of="$ur_dnem" bs=1 seek="$paste_start" conv=notrunc status=none
