<?php

function _custom_services_resources_content() {

  $nids = array();
  $nids = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('type', 'blog_article')
    ->orderBy('created', 'DESC')
    ->range(0, 10)
    ->execute()
    ->fetchAll();



  return(var_dump($nids));
}