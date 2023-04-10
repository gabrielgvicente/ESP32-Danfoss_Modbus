#ifndef FC_MODBUS_H
#define FC_MODBUS_H

/*================================================ =====================================
  * Descrição:
  * As estruturas de parâmetros Modbus usadas para definir instâncias Modbus que
  * pode ser endereçado pelo protocolo Modbus. Defina essas estruturas de acordo com suas necessidades em
  * seu aplicativo. Abaixo está apenas um exemplo de parâmetros possíveis.
  *================================================= ===================================*/

// Este arquivo define a estrutura dos parâmetros do modbus que refletem o espaço de endereço do modbus correspondente
// para cada tipo de registro modbus (bobinas, entradas discretas, registros de retenção, registros de entrada)

#pragma pack(push, 1)
typedef struct
{
    uint8_t discrete_input0:1;
    uint8_t discrete_input1:1;
    uint8_t discrete_input2:1;
    uint8_t discrete_input3:1;
    uint8_t discrete_input4:1;
    uint8_t discrete_input5:1;
    uint8_t discrete_input6:1;
    uint8_t discrete_input7:1;
    uint8_t discrete_input_port1:8;
} discrete_reg_params_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct
{
    uint8_t coils_port0;
    uint8_t coils_port1;
} coil_reg_params_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct
{
    float input_data0; // 0
    float input_data1; // 2
    float input_data2; // 4
    float input_data3; // 6
    float input_data4; // 8
    float input_data5;
    float input_data6;
    float input_data7;
} input_reg_params_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct
{
    float holding_data0;
    float holding_data1;
    float holding_data2;
    float holding_data3;
    float holding_data4;
    float holding_data5;
    float holding_data6;
    float holding_data7;
} holding_reg_params_t;
#pragma pack(pop)

extern holding_reg_params_t holding_reg_params;
extern input_reg_params_t input_reg_params;
extern coil_reg_params_t coil_reg_params;
extern discrete_reg_params_t discrete_reg_params;

#endif
