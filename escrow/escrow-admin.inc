<?php
    function escrow_form_validate($form_id, &$form_state){
        if (!is_numeric($form_state['values']['cantidad'])) {
        form_set_error('[cantidad]', 'El campo cantidad debe ser solo numerico.');
        }
        if (!is_numeric($form_state['values']['precio'])) {
        form_set_error('[precio]', 'El campo precio debe ser solo numerico.');
        }
        if (!$email_vend) return t('Debes ingresar un e-mail en el campo.');
        if (!valid_email_address($email_vend)) {
        return t('La direccion de e-mail %email_vend no es valido.', array('%email_vend' => $email_vend));
        }
        $result=db_result(db_query("SELECT * FROM {users} u INNER JOIN {users_roles} s ON u.uid=s.uid AND s.rid!=%d",3));
        //while($mail = db_fetch_array($result)) {
     
        if ($form_state['values']['mail']==$mail['uid']['mail']) {
        form_set_error('[mail]', 'No puedes ingresar el email de un comprador.');
         // }
        }
}