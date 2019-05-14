# opendroneid-core-c
Open Drone ID Core C Library

This provides a function library for encoding and decoding (packing/unpacking) Open Drone ID messages as the format is defined in the specification.

To build sample app:
just type: make

It will do a test encode/decode, then continuously generate sample messages.

The intended architecture is to take whatever input you wish, and to put it into the nominal structures as defined in opendroneid.h these are non-encoded forms:

```
ODID_BasicID_data
ODID_Location_data
ODID_Auth_data
ODID_SelfID_data
ODID_System_data
```

The SDK functions will encode the structures above into the following:

```
ODID_BasicID_encoded
ODID_Location_encoded
ODID_Auth_encoded
ODID_SelfID_encoded
ODID_System_encoded
```

Once you have the encoded data, then you are ready to assemble and transmit over any of the acceptable broadcast methods in Open Drone ID.

The primary SDK calls are the following:

```
int encodeBasicIDMessage(ODID_BasicID_encoded *outEncoded, ODID_BasicID_data *inData);
int encodeLocationMessage(ODID_Location_encoded *outEncoded, ODID_Location_data *inData);
int encodeAuthMessage(ODID_Auth_encoded *outEncoded, ODID_Auth_data *inData);
int encodeSelfIDMessage(ODID_SelfID_encoded *outEncoded, ODID_SelfID_data *inData);
int encodeSystemMessage(ODID_System_encoded *outEncoded, ODID_System_data *inData);

int decodeBasicIDMessage(ODID_BasicID_data *outData, ODID_BasicID_encoded *inEncoded);
int decodeLocationMessage(ODID_Location_data *outData, ODID_Location_encoded *inEncoded);
int decodeAuthMessage(ODID_Auth_data *outData, ODID_Auth_encoded *inEncoded);
int decodeSelfIDMessage(ODID_SelfID_data *outData, ODID_SelfID_encoded *inEncoded);
int decodeSystemMessage(ODID_System_data *outData, ODID_System_encoded *inEncoded);
```