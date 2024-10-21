/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:47:24 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/22 12:47:24 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() {
    Data data;
    data.number = 42;
    data.name = "Serialization Test";

    uintptr_t raw = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << "Serialized value: " << raw << std::endl;
    if (&data == deserializedData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Data: number = " << deserializedData->number << ", name = " << deserializedData->name << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    uintptr_t corruptedRaw = raw + 1;
    std::cout << "Corrupted serialized value: " << corruptedRaw << std::endl;

    deserializedData = Serializer::deserialize(corruptedRaw);

    if (deserializedData == &data) {
        std::cout << "Deserialization successful!" << std::endl;
        std::cout << "Data value: " << deserializedData->number << std::endl;
        std::cout << "Data name: " << deserializedData->name << std::endl;
    } else {
        std::cout << "Deserialization failed." << std::endl;
        std::cout << "Deserialized pointer does not match the original." << std::endl;
    }
    return 0;
}
// int main() {

//     Data originalData;
//     data.number = 42;
//     data.name = "Serialization Test";

//     uintptr_t raw = Serializer::serialize(&originalData);
//     std::cout << "Serialized value: " << raw << std::endl;

//     uintptr_t corruptedRaw = raw + 1;
//     std::cout << "Corrupted serialized value: " << corruptedRaw << std::endl;

//     Data* deserializedData = Serializer::deserialize(corruptedRaw);

//     if (deserializedData == &originalData) {
//         std::cout << "Deserialization successful!" << std::endl;
//         std::cout << "Data value: " << deserializedData->number << std::endl;
//         std::cout << "Data name: " << deserializedData->name << std::endl;
//     } else {
//         std::cout << "Deserialization failed." << std::endl;
//         std::cout << "Deserialized pointer does not match the original." << std::endl;
//     }

//     return 0;
// }