/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_MODEL_METADATA_H_
#define _EI_CLASSIFIER_MODEL_METADATA_H_

#include <stdint.h>

#define EI_CLASSIFIER_NONE                       255
#define EI_CLASSIFIER_UTENSOR                    1
#define EI_CLASSIFIER_TFLITE                     2
#define EI_CLASSIFIER_CUBEAI                     3

#define EI_CLASSIFIER_SENSOR_UNKNOWN             -1
#define EI_CLASSIFIER_SENSOR_MICROPHONE          1
#define EI_CLASSIFIER_SENSOR_ACCELEROMETER       2
#define EI_CLASSIFIER_SENSOR_CAMERA              3

// These must match the enum values in TensorFlow Lite's "TfLiteType"
#define EI_CLASSIFIER_DATATYPE_FLOAT32           1
#define EI_CLASSIFIER_DATATYPE_INT8              9

#define EI_CLASSIFIER_PROJECT_ID                 2389
#define EI_CLASSIFIER_PROJECT_OWNER              "Benjamin"
#define EI_CLASSIFIER_PROJECT_NAME               "alcohol"
#define EI_CLASSIFIER_PROJECT_DEPLOY_VERSION     17
#define EI_CLASSIFIER_NN_INPUT_FRAME_SIZE        28
#define EI_CLASSIFIER_RAW_SAMPLE_COUNT           10
#define EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME      4
#define EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE       (EI_CLASSIFIER_RAW_SAMPLE_COUNT * EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME)
#define EI_CLASSIFIER_INPUT_WIDTH                0
#define EI_CLASSIFIER_INPUT_HEIGHT               0
#define EI_CLASSIFIER_INTERVAL_MS                100
#define EI_CLASSIFIER_OUT_TENSOR_NAME            "y_pred/Softmax_1:0"
#define EI_CLASSIFIER_LABEL_COUNT                3
#define EI_CLASSIFIER_HAS_ANOMALY                1
#define EI_CLASSIFIER_FREQUENCY                  10

#define EI_CLASSIFIER_TFLITE_ARENA_SIZE          6745
#define EI_CLASSIFIER_TFLITE_INPUT_DATATYPE      EI_CLASSIFIER_DATATYPE_FLOAT32
#define EI_CLASSIFIER_TFLITE_INPUT_QUANTIZED     0
#define EI_CLASSIFIER_TFLITE_INPUT_SCALE         0
#define EI_CLASSIFIER_TFLITE_INPUT_ZEROPOINT     0
#define EI_CLASSIFIER_TFLITE_OUTPUT_DATATYPE     EI_CLASSIFIER_DATATYPE_FLOAT32
#define EI_CLASSIFIER_TFLITE_OUTPUT_QUANTIZED     0
#define EI_CLASSIFIER_TFLITE_OUTPUT_SCALE        0
#define EI_CLASSIFIER_TFLITE_OUTPUT_ZEROPOINT    0
#define EI_CLASSIFIER_INFERENCING_ENGINE         EI_CLASSIFIER_TFLITE
#define EI_CLASSIFIER_COMPILED                   1
#define EI_CLASSIFIER_SENSOR                     EI_CLASSIFIER_SENSOR_UNKNOWN
#define EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER    1

#define EI_CLASSIFIER_SENSOR                     EI_CLASSIFIER_SENSOR_UNKNOWN
#define EI_CLASSIFIER_SLICE_SIZE                 (EI_CLASSIFIER_RAW_SAMPLE_COUNT / EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW)
#ifndef EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW
#define EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW    4
#endif // EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW

const char* ei_classifier_inferencing_categories[] = { "ambient", "coffee", "el_loro" };

typedef struct {
    uint16_t implementation_version;
    int axes;
    float scale_axes;
    bool average;
    bool minimum;
    bool maximum;
    bool rms;
    bool stdev;
    bool skewness;
    bool kurtosis;
} ei_dsp_config_flatten_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    const char * channels;
} ei_dsp_config_image_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    int num_cepstral;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int win_size;
    int low_frequency;
    int high_frequency;
    float pre_cof;
    int pre_shift;
} ei_dsp_config_mfcc_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int low_frequency;
    int high_frequency;
    int win_size;
} ei_dsp_config_mfe_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    float scale_axes;
} ei_dsp_config_raw_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    float scale_axes;
    const char * filter_type;
    float filter_cutoff;
    int filter_order;
    int fft_length;
    int spectral_peaks_count;
    float spectral_peaks_threshold;
    const char * spectral_power_edges;
} ei_dsp_config_spectral_analysis_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    float frame_length;
    float frame_stride;
    int fft_length;
    bool show_axes;
} ei_dsp_config_spectrogram_t;

typedef struct {
    uint16_t implementation_version;
    int axes;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int low_frequency;
    int high_frequency;
    float pre_cof;
} ei_dsp_config_audio_syntiant_t;

ei_dsp_config_flatten_t ei_dsp_config_36 = {
    1,
    4,
    1.00000f,
    true,
    true,
    true,
    true,
    true,
    true,
    true
};

#endif // _EI_CLASSIFIER_MODEL_METADATA_H_