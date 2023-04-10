#include <stdint.h>
#include "fc_modbus.h"

/*================================================ =====================================
 * Descrição:
 * Arquivo C para definir instâncias de armazenamento de parâmetros
 *================================================= ===================================*/

// Aqui estão as instâncias definidas pelo usuário para parâmetros de dispositivo empacotados por 1 byte
// Estes são os valores que podem ser acessados ​​do mestre Modbus
holding_reg_params_t holding_reg_params = { 0 };

input_reg_params_t input_reg_params = { 0 };

coil_reg_params_t coil_reg_params = { 0 };

discrete_reg_params_t discrete_reg_params = { 0 };
