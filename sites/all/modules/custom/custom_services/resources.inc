<?php

function _custom_services_resources_content() {
  if(!empty($id)) {
    return 'have and id!';
  }
  return array('test', 'test2', 'test34');
}