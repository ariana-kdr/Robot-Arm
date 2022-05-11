function cb_edit_ref_add()

global partexist

main_enable('repeat','off');
main_enable('jogmode','off');
main_enable('load','off');
main_enable('save','off');
main_enable('new','off');
main_enable('add','off');
main_enable('edit','off');
main_enable('del','off');
main_enable('accept','off');

R12_r3g_edit_part;
cr_edit_part;
