<?php

/**
 * @file
 * Holds Tuque wrapper functions to generate a UUID.
 */

@include_once 'sites/all/libraries/tuque/Repository.php';

/**
 * Helper class that generates a UUID from Tuque.
 */
class DgiBatchQueueIdFixerUuidGenerator extends FedoraRepository {

  /**
   * No-op constructor as do not need a FedoraRepository connection.
   */
  public function __construct() {
    // No-op.
  }

  /**
   * Helper used to generate a UUID using the core Tuque functionality.
   *
   * @return string
   *   A valid V4 UUID.
   */
  public function generateUuid() {
    return $this->getUuid();
  }

}
