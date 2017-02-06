cmake_minimum_required(VERSION 3.6)
project(CPrimerPlus6E)

set(CMAKE_C_STANDARD 99)

#-----------------------------
#           ch01
#-----------------------------
#[[set(SOURCE_FILE_LISTING1    Ch01/listing1.c)
add_executable(listing1 ${SOURCE_FILE_LISTING1})

set(SOURCE_FILE_LISTING2    Ch01/listing2.c)
add_executable(listing2 ${SOURCE_FILE_LISTING2})


set(SOURCE_FILE_INFORM    Ch01/inform.c)
add_executable(inform ${SOURCE_FILE_INFORM})]]


#-----------------------------
#           ch03
#-----------------------------
#[[set(ch03_platinum Ch03/platinum.c)
add_executable(ch03_platinum ${ch03_platinum})

set(ch03_print1 Ch03/print1.c)
add_executable(ch03_print1 ${ch03_print1})

set(ch03_bases Ch03/bases.c)
add_executable(ch03_bases ${ch03_bases})

set(ch03_toobig Ch03/toobig.c)
add_executable(ch03_toobig ${ch03_toobig})

set(ch03_print2 Ch03/print2.c)
add_executable(ch03_print2 ${ch03_print2})

set(ch03_charcode Ch03/charcode.c)
add_executable(ch03_charcode ${ch03_charcode})

set(ch03_altnames Ch03/altnames.c)
add_executable(ch03_altnames ${ch03_altnames})

set(ch03_showf_pt Ch03/showf_pt.c)
add_executable(ch03_showf_pt ${ch03_showf_pt})

set(ch03_floaterr Ch03/floaterr.c)
add_executable(ch03_floaterr ${ch03_floaterr})

set(ch03_typesize Ch03/typesize.c)
add_executable(ch03_typesize ${ch03_typesize})

set(ch03_badcount Ch03/badcount.c)
add_executable(ch03_badcount ${ch03_badcount})

set(ch03_escape Ch03/escape.c)
add_executable(ch03_escape ${ch03_escape})]]

#-----------------------------
#           ch04
#-----------------------------

#[[set(ch04_talkback Ch04/talkback.c)
add_executable(ch04_talkback ${ch04_talkback})

set(ch04_praise1 Ch04/praise1.c)
add_executable(ch04_praise1 ${ch04_praise1})

set(ch04_praise2 Ch04/praise2.c)
add_executable(ch04_praise2 ${ch04_praise2})

set(ch04_pizza Ch04/pizza.c)
add_executable(ch04_pizza ${ch04_pizza})

set(ch04_defines Ch04/defines.c)
add_executable(ch04_defines ${ch04_defines})

set(ch04_printout Ch04/printout.c)
add_executable(ch04_printout ${ch04_printout})

set(ch04_width Ch04/width.c)
add_executable(ch04_width ${ch04_width})

set(ch04_floats Ch04/floats.c)
add_executable(ch04_floats ${ch04_floats})

set(ch04_flags Ch04/flags.c)
add_executable(ch04_flags ${ch04_flags})

set(ch04_stringf Ch04/stringf.c)
add_executable(ch04_stringf ${ch04_stringf})

set(ch04_intconv Ch04/intconv.c)
add_executable(ch04_intconv ${ch04_intconv})

set(ch04_floatcnv Ch04/floatcnv.c)
add_executable(ch04_floatcnv ${ch04_floatcnv})

set(ch04_prntval Ch04/prntval.c)
add_executable(ch04_prntval ${ch04_prntval})

set(ch04_longstrg Ch04/longstrg.c)
add_executable(ch04_longstrg ${ch04_longstrg})

set(ch04_input Ch04/input.c)
add_executable(ch04_input ${ch04_input})

set(ch04_varwid Ch04/varwid.c)
add_executable(ch04_varwid ${ch04_varwid})]]

#-----------------------------
#           ch05
#-----------------------------

#[[set(ch05_shoes1 Ch05/shoes1.c)
add_executable(ch05_shoes1 ${ch05_shoes1})

set(ch05_shoes2 Ch05/shoes2.c)
add_executable(ch05_shoes2 ${ch05_shoes2})

set(ch05_golf Ch05/golf.c)
add_executable(ch05_golf ${ch05_golf})

set(ch05_squares Ch05/squares.c)
add_executable(ch05_squares ${ch05_squares})

set(ch05_wheat Ch05/wheat.c)
add_executable(ch05_wheat ${ch05_wheat})

set(ch05_divide Ch05/divide.c)
add_executable(ch05_divide ${ch05_divide})

set(ch05_rules Ch05/rules.c)
add_executable(ch05_rules ${ch05_rules})

set(ch05_sizeof Ch05/sizeof.c)
add_executable(ch05_sizeof ${ch05_sizeof})

set(ch05_min_sec Ch05/min_sec.c)
add_executable(ch05_min_sec ${ch05_min_sec})

set(ch05_add_one Ch05/add_one.c)
add_executable(ch05_add_one ${ch05_add_one})

set(ch05_post_pre Ch05/post_pre.c)
add_executable(ch05_post_pre ${ch05_post_pre})

set(ch05_bottles Ch05/bottles.c)
add_executable(ch05_bottles ${ch05_bottles})

set(ch05_addemup Ch05/addemup.c)
add_executable(ch05_addemup ${ch05_addemup})

set(ch05_convert Ch05/convert.c)
add_executable(ch05_convert ${ch05_convert})

set(ch05_pound Ch05/pound.c)
add_executable(ch05_pound ${ch05_pound})

set(ch05_running Ch05/running.c)
add_executable(ch05_running ${ch05_running})]]

#-----------------------------
#           ch06
#-----------------------------

#[[set(ch06_summing Ch06/summing.c)
add_executable(ch06_summing ${ch06_summing})

set(ch06_when Ch06/when.c)
add_executable(ch06_when ${ch06_when})

set(ch06_while1 Ch06/while1.c)
add_executable(ch06_while1 ${ch06_while1})

set(ch06_while2 Ch06/while2.c)
add_executable(ch06_while2 ${ch06_while2})

set(ch06_cmpflt Ch06/cmpflt.c)
add_executable(ch06_cmpflt ${ch06_cmpflt})

set(ch06_t_and_f Ch06/t_and_f.c)
add_executable(ch06_t_and_f ${ch06_t_and_f})

set(ch06_truth Ch06/truth.c)
add_executable(ch06_truth ${ch06_truth})

set(ch06_trouble Ch06/trouble.c)
add_executable(ch06_trouble ${ch06_trouble})

set(ch06_boolean Ch06/boolean.c)
add_executable(ch06_boolean ${ch06_boolean})

set(ch06_sweetie1 Ch06/sweetie1.c)
add_executable(ch06_sweetie1 ${ch06_sweetie1})

set(ch06_sweetie2 Ch06/sweetie2.c)
add_executable(ch06_sweetie2 ${ch06_sweetie2})

set(ch06_for_cube Ch06/for_cube.c)
add_executable(ch06_for_cube ${ch06_for_cube})

set(ch06_for_down Ch06/for_down.c)
add_executable(ch06_for_down ${ch06_for_down})

set(ch06_for_char Ch06/for_char.c)
add_executable(ch06_for_char ${ch06_for_char})

set(ch06_for_geo Ch06/for_geo.c)
add_executable(ch06_for_geo ${ch06_for_geo})

set(ch06_for_wild Ch06/for_wild.c)
add_executable(ch06_for_wild ${ch06_for_wild})

set(ch06_for_none Ch06/for_none.c)
add_executable(ch06_for_none ${ch06_for_none})

set(ch06_for_show Ch06/for_show.c)
add_executable(ch06_for_show ${ch06_for_show})

set(ch06_zeno Ch06/zeno.c)
add_executable(ch06_zeno ${ch06_zeno})

set(ch06_do_while Ch06/do_while.c)
add_executable(ch06_do_while ${ch06_do_while})

set(ch06_entry Ch06/entry.c)
add_executable(ch06_entry ${ch06_entry})

set(ch06_rows1 Ch06/rows1.c)
add_executable(ch06_rows1 ${ch06_rows1})

set(ch06_rows2 Ch06/rows2.c)
add_executable(ch06_rows2 ${ch06_rows2})

set(ch06_scores_in Ch06/scores_in.c)
add_executable(ch06_scores_in ${ch06_scores_in})

set(ch06_power Ch06/power.c)
add_executable(ch06_power ${ch06_power})]]

#-----------------------------
#           ch07
#-----------------------------
#[[
set(ch07_colddays Ch07/colddays.c)
add_executable(ch07_colddays ${ch07_colddays})

set(ch07_cypher1 Ch07/cypher1.c)
add_executable(ch07_cypher1 ${ch07_cypher1})

set(ch07_cypher2 Ch07/cypher2.c)
add_executable(ch07_cypher2 ${ch07_cypher2})

set(ch07_electric Ch07/electric.c)
add_executable(ch07_electric ${ch07_electric})

set(ch07_divisors Ch07/divisors.c)
add_executable(ch07_divisors ${ch07_divisors})

set(ch07_chcount Ch07/chcount.c)
add_executable(ch07_chcount ${ch07_chcount})

set(ch07_wordcnt Ch07/wordcnt.c)
add_executable(ch07_wordcnt ${ch07_wordcnt})

set(ch07_paint Ch07/paint.c)
add_executable(ch07_paint ${ch07_paint})

set(ch07_skippart Ch07/skippart.c)
add_executable(ch07_skippart ${ch07_skippart})

set(ch07_break Ch07/break.c)
add_executable(ch07_break ${ch07_break})

set(ch07_animals Ch07/animals.c)
add_executable(ch07_animals ${ch07_animals})

set(ch07_vowels Ch07/vowels.c)
add_executable(ch07_vowels ${ch07_vowels})]]

#-----------------------------
#           ch008
#-----------------------------
