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

#[[set(ch08_echo_eof Ch08/echo_eof.c)
add_executable(ch08_echo_eof ${ch08_echo_eof})

set(ch08_file_eof Ch08/file_eof.c)
add_executable(ch08_file_eof ${ch08_file_eof})

set(ch08_guess Ch08/guess.c)
add_executable(ch08_guess ${ch08_guess})

set(ch08_showchar1 Ch08/showchar1.c)
add_executable(ch08_showchar1 ${ch08_showchar1})

set(ch08_showchar2 Ch08/showchar2.c)
add_executable(ch08_showchar2 ${ch08_showchar2})

set(ch08_checking Ch08/checking.c)
add_executable(ch08_checking ${ch08_checking})

set(ch08_menuette Ch08/menuette.c)
add_executable(ch08_menuette ${ch08_menuette})]]

#-----------------------------
#           ch009
#-----------------------------
#[[
set(ch09_lethead1 Ch09/lethead1.c)
add_executable(ch09_lethead1 ${ch09_lethead1})

set(ch09_lethead2 Ch09/lethead2.c)
add_executable(ch09_lethead2 ${ch09_lethead2})

set(ch09_lesser Ch09/lesser.c)
add_executable(ch09_lesser ${ch09_lesser})

set(ch09_misuse Ch09/misuse.c)
add_executable(ch09_misuse ${ch09_misuse})

set(ch09_proto Ch09/proto.c)
add_executable(ch09_proto ${ch09_proto})

set(ch09_recur Ch09/recur.c)
add_executable(ch09_recur ${ch09_recur})

set(ch09_factor Ch09/factor.c)
add_executable(ch09_factor ${ch09_factor})

set(ch09_binary Ch09/binary.c)
add_executable(ch09_binary ${ch09_binary})

set(ch09_usehotel Ch09/usehotel.c Ch09/hotel.c)
add_executable(ch09_usehotel ${ch09_usehotel} )

set(ch09_loccheck Ch09/loccheck.c)
add_executable(ch09_loccheck ${ch09_loccheck})

set(ch09_swap1 Ch09/swap1.c)
add_executable(ch09_swap1 ${ch09_swap1})

set(ch09_swap2 Ch09/swap2.c)
add_executable(ch09_swap2 ${ch09_swap2})

set(ch09_swap3 Ch09/swap3.c)
add_executable(ch09_swap3 ${ch09_swap3})]]

#-----------------------------
#           ch010
#-----------------------------
#[[set(ch10_day_mon1 Ch10/day_mon1.c)
add_executable(ch10_day_mon1 ${ch10_day_mon1})

set(ch10_no_data Ch10/no_data.c)
add_executable(ch10_no_data ${ch10_no_data})

set(ch10_some_data Ch10/some_data.c)
add_executable(ch10_some_data ${ch10_some_data})

set(ch10_day_mon2 Ch10/day_mon2.c)
add_executable(ch10_day_mon2 ${ch10_day_mon2})

set(ch10_designate Ch10/designate.c)
add_executable(ch10_designate ${ch10_designate})

set(ch10_bounds Ch10/bounds.c)
add_executable(ch10_bounds ${ch10_bounds})

set(ch10_rain Ch10/rain.c)
add_executable(ch10_rain ${ch10_rain})

set(ch10_pnt_add Ch10/pnt_add.c)
add_executable(ch10_pnt_add ${ch10_pnt_add})

set(ch10_day_mon3 Ch10/day_mon3.c)
add_executable(ch10_day_mon3 ${ch10_day_mon3})

set(ch10_sum_arr1 Ch10/sum_arr1.c)
add_executable(ch10_sum_arr1 ${ch10_sum_arr1})

set(ch10_sum_arr2 Ch10/sum_arr2.c)
add_executable(ch10_sum_arr2 ${ch10_sum_arr2})

set(ch10_order Ch10/order.c)
add_executable(ch10_order ${ch10_order})

set(ch10_ptr_ops Ch10/ptr_ops.c)
add_executable(ch10_ptr_ops ${ch10_ptr_ops})

set(ch10_arf Ch10/arf.c)
add_executable(ch10_arf ${ch10_arf})

set(ch10_zippo1 Ch10/zippo1.c)
add_executable(ch10_zippo1 ${ch10_zippo1})

set(ch10_zippo2 Ch10/zippo2.c)
add_executable(ch10_zippo2 ${ch10_zippo2})

set(ch10_array2d Ch10/array2d.c)
add_executable(ch10_array2d ${ch10_array2d})

set(ch10_vararr2d Ch10/vararr2d.c)
add_executable(ch10_vararr2d ${ch10_vararr2d})

set(ch10_flc Ch10/flc.c)
add_executable(ch10_flc ${ch10_flc})]]

#-----------------------------
#           ch011
#-----------------------------
#[[
set(ch11_strings1 Ch11/strings1.c)
add_executable(ch11_strings1 ${ch11_strings1})

set(ch11_strptr Ch11/strptr.c)
add_executable(ch11_strptr ${ch11_strptr})

set(ch11_addresses Ch11/addresses.c)
add_executable(ch11_addresses ${ch11_addresses})

set(ch11_arrchar Ch11/arrchar.c)
add_executable(ch11_arrchar ${ch11_arrchar})

set(ch11_p_and_s Ch11/p_and_s.c)
add_executable(ch11_p_and_s ${ch11_p_and_s})

set(ch11_getsputs Ch11/getsputs.c)
add_executable(ch11_getsputs ${ch11_getsputs})

set(ch11_fgets1 Ch11/fgets1.c)
add_executable(ch11_fgets1 ${ch11_fgets1})

set(ch11_fgets2 Ch11/fgets2.c)
add_executable(ch11_fgets2 ${ch11_fgets2})

set(ch11_fgets3 Ch11/fgets3.c)
add_executable(ch11_fgets3 ${ch11_fgets3})

set(ch11_scan_str Ch11/scan_str.c)
add_executable(ch11_scan_str ${ch11_scan_str})

set(ch11_put_out Ch11/put_out.c)
add_executable(ch11_put_out ${ch11_put_out})

set(ch11_nono Ch11/nono.c)
add_executable(ch11_nono ${ch11_nono})

set(ch11_put_put Ch11/put_put.c)
add_executable(ch11_put_put ${ch11_put_put})

set(ch11_test_fit Ch11/test_fit.c)
add_executable(ch11_test_fit ${ch11_test_fit})

set(ch11_str_cat Ch11/str_cat.c)
add_executable(ch11_str_cat ${ch11_str_cat})

set(ch11_join_chk Ch11/join_chk.c)
add_executable(ch11_join_chk ${ch11_join_chk})

set(ch11_nogo Ch11/nogo.c)
add_executable(ch11_nogo ${ch11_nogo})

set(ch11_compare Ch11/compare.c)
add_executable(ch11_compare ${ch11_compare})

set(ch11_compback Ch11/compback.c)
add_executable(ch11_compback ${ch11_compback})

set(ch11_quit_chk Ch11/quit_chk.c)
add_executable(ch11_quit_chk ${ch11_quit_chk})

set(ch11_starsrch Ch11/starsrch.c)
add_executable(ch11_starsrch ${ch11_starsrch})

set(ch11_copy1 Ch11/copy1.c)
add_executable(ch11_copy1 ${ch11_copy1})

set(ch11_copy2 Ch11/copy2.c)
add_executable(ch11_copy2 ${ch11_copy2})

set(ch11_copy3 Ch11/copy3.c)
add_executable(ch11_copy3 ${ch11_copy3})

set(ch11_format Ch11/format.c)
add_executable(ch11_format ${ch11_format})

set(ch11_sort_str Ch11/sort_str.c)
add_executable(ch11_sort_str ${ch11_sort_str})

set(ch11_mod_str Ch11/mod_str.c)
add_executable(ch11_mod_str ${ch11_mod_str})

set(ch11_repeat Ch11/repeat.c)
add_executable(ch11_repeat ${ch11_repeat})

set(ch11_strcnvt Ch11/strcnvt.c)
add_executable(ch11_strcnvt ${ch11_strcnvt})]]

#-----------------------------
#           ch012
#-----------------------------
#[[
set(ch12_hiding Ch12/hiding.c)
add_executable(ch12_hiding ${ch12_hiding})

set(ch12_for99 Ch12/forc99.c)
add_executable(ch12_for99 ${ch12_for99})

set(ch12_loc_stat Ch12/loc_stat.c)
add_executable(ch12_loc_stat ${ch12_loc_stat})

set(ch12_global Ch12/global.c)
add_executable(ch12_global ${ch12_global})

set(ch12_parta Ch12/parta.c Ch12/partb.c)
add_executable(ch12_parta ${ch12_parta})

set(ch12_rand0 Ch12/rand0.c Ch12/r_drive0.c)
add_executable(ch12_rand0 ${ch12_rand0})

set(ch12_r_drive1 Ch12/s_and_r.c Ch12/r_drive1.c)
add_executable(ch12_r_drive1 ${ch12_r_drive1})

set(ch12_diceroll Ch12/manydice.c Ch12/diceroll.c)
add_executable(ch12_diceroll ${ch12_diceroll})

set(ch12_dyn_arr Ch12/dyn_arr.c)
add_executable(ch12_dyn_arr ${ch12_dyn_arr})

set(ch12_where Ch12/where.c)
add_executable(ch12_where ${ch12_where})]]

#-----------------------------
#           ch013
#-----------------------------

set(ch13_count Ch13/count.c)
add_executable(ch13_count ${ch13_count})

set(ch13_reducto Ch13/reducto.c)
add_executable(ch13_reducto ${ch13_reducto})

set(ch13_addaword Ch13/addaword.c)
add_executable(ch13_addaword ${ch13_addaword})

set(ch13_reverse Ch13/reverse.c)
add_executable(ch13_reverse ${ch13_reverse})
