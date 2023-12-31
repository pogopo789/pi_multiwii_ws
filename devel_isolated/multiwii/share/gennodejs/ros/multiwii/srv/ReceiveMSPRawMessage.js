// Auto-generated. Do not edit!

// (in-package multiwii.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let MSPRawMessage = require('../msg/MSPRawMessage.js');

//-----------------------------------------------------------

class ReceiveMSPRawMessageRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.id = null;
    }
    else {
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReceiveMSPRawMessageRequest
    // Serialize message field [id]
    bufferOffset = _serializer.uint8(obj.id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReceiveMSPRawMessageRequest
    let len;
    let data = new ReceiveMSPRawMessageRequest(null);
    // Deserialize message field [id]
    data.id = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'multiwii/ReceiveMSPRawMessageRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '541b98e964705918fa8eb206b65347b3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReceiveMSPRawMessageRequest(null);
    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    return resolved;
    }
};

class ReceiveMSPRawMessageResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.msg = null;
    }
    else {
      if (initObj.hasOwnProperty('msg')) {
        this.msg = initObj.msg
      }
      else {
        this.msg = new MSPRawMessage();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReceiveMSPRawMessageResponse
    // Serialize message field [msg]
    bufferOffset = MSPRawMessage.serialize(obj.msg, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReceiveMSPRawMessageResponse
    let len;
    let data = new ReceiveMSPRawMessageResponse(null);
    // Deserialize message field [msg]
    data.msg = MSPRawMessage.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += MSPRawMessage.getMessageSize(object.msg);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'multiwii/ReceiveMSPRawMessageResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0e01cb4af5047b763cb98e1ac7628835';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    MSPRawMessage msg
    
    
    ================================================================================
    MSG: multiwii/MSPRawMessage
    uint8 id
    uint8[] data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReceiveMSPRawMessageResponse(null);
    if (msg.msg !== undefined) {
      resolved.msg = MSPRawMessage.Resolve(msg.msg)
    }
    else {
      resolved.msg = new MSPRawMessage()
    }

    return resolved;
    }
};

module.exports = {
  Request: ReceiveMSPRawMessageRequest,
  Response: ReceiveMSPRawMessageResponse,
  md5sum() { return 'df9470897e4eb0a05a5b4a1532d6a67f'; },
  datatype() { return 'multiwii/ReceiveMSPRawMessage'; }
};
